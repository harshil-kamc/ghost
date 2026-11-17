const mdb=require("mongodb")
const prompt=require("prompt-sync")()
const mclient=mdb.MongoClient
const url="mongodb://localhost:27017"
async function connectDB()
{
    try
    {
        const conn=await mclient.connect(url);
        console.log("Mongodb connection success...")
        let n=prompt("How many records you want to insert?")
        n=parseInt(n)
        const test=conn.db("test")
        const std=test.collection("student")
        let query=[]
        for(let i=0;i<n;i++)
        {
            console.log(`Enter details of ${i} record:\n=====\n `)
            let id=parseInt(prompt("enter id:"));
            let name=prompt("enter name:");
            let marks=parseInt(prompt("enter marks:"))
            let branch=prompt("enter branch:")
            let city=prompt("enter city:")
            let record={
                "_id":id,"name":name,"marks":marks,"branch":branch,"city":city
            }
            query.push(record)
        }
        await std.insertMany(query);
        console.log(n+" records inserted")
        conn.close();
    }
    catch (error)
    {
        console.log("Error="+error)
    }
}
connectDB()