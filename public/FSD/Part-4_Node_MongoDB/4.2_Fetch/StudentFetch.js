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
        const test=conn.db("test")
        const std=test.collection("student")
        let result=await std.find({}).toArray()
        console.log(result);
        console.log("Number of records fetched="+result.length)
        conn.close()
    }catch(error)
    {
        console.log("Error="+error)
    }
}
connectDB()