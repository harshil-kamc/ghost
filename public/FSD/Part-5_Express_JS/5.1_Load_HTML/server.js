const express=require("express")
const file=require("fs")
const app=express()
let data=file.readFileSync('index.html',"utf-8")
app.get("/",(req,res)=>
{
    res.send(data)
})
app.listen(3000,()=>
{
    console.log("server started...")
})