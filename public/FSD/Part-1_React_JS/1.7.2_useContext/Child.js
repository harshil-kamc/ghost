import GrandChild from "./GrandChild"
function Child()
{
    return(<>
        <h3>Child component</h3>
        <GrandChild/>
    </>)
}
export default Child;