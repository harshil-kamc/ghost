const express=require("express")
const app=express()
app.get("/",(req,res)=>
{
    res.send("<h2 align='center'>This is Main Page<br/><a href='/home'>Goto Home Page</a></h2>")
})
app.get("/home",(req,res)=>
{
    res.send("<h2 align='center'>This is Home Page<br/><a href='/dashboard'>Goto Dashboard Page</a></h2>")
})
app.get("/dashboard",(req,res)=>
{
    res.send("<h2 align='center'>This is Dashboard Page<br/><a href='/'>Goto Main Page</a></h2>")
})
app.listen(3000,()=>
{
    console.log("server started...")
})