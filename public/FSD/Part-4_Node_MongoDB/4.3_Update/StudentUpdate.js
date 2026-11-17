const mdb=require("mongodb")
const prompt=require("prompt-sync")()
const mclient=mdb.MongoClient
const url="mongodb://localhost:27017"
async function connectDB()
{
    try
    {
        const conn=await mclient.connect(url)
        const test=conn.db("test")
        const std=test.collection("student")
        console.log("Mongodb connection success...")
        let query1={},query2={}
        let skey=prompt("Enter search key:")
        let svalue=prompt("Enter search value:")
        query1[skey]=svalue
        let ukey=prompt("Enter update key:")
        let uvalue=parseInt(prompt("Enter updated value:"))
        query2[ukey]=uvalue
        await std.updateMany(query1,{$set:query2})
        conn.close()
        console.log("Record(s) updated")
    }
    catch (error)
    {
        console.log("Error="+error)
    }
}
connectDB()