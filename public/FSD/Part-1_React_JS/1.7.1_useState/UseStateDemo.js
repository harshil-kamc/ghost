import { useState } from "react"
function UseStateDemo()
{
    let [count,setCount]=useState(0);
    const increase=()=>setCount(++count)
    const decrease=()=>setCount(--count)
    return(<div align='center'>
        <button onClick={increase}>Increment</button>
        &nbsp;&nbsp;&nbsp;
        {count}&nbsp;&nbsp;&nbsp;
        <button onClick={decrease}>Decrement</button>
    </div>)
}
export default UseStateDemo