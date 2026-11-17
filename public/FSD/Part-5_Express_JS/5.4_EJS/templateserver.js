const express=require("express")
const app=express()
app.set("view engine","ejs")
let data={"eid":1234,"name":"John","job":"Clerk","salary":7000,"address":"Delhi"}
app.get("/",(req,res)=>
{
    res.render("index",data)
})
app.listen(3000,()=>
{
    console.log("server started...")
})