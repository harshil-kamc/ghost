import { UserNameContext } from "./App";
import { useContext } from "react";
function GrandChild()
{
    let data=useContext(UserNameContext);
    return(<>
        <h3>Grand Child component</h3>
        <h3>Data Inherited from Main Application={data}</h3>
    </>)
}
export default GrandChild;