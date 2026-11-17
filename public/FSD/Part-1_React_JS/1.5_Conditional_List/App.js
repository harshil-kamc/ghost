import Conditional from "./Conditional";
import List from "./List";
function App() {
    return (
        <div align="center">
            <h3>React JS Program to demonstrate Conditional Rendering and List Rendering</h3><hr/>
            <Conditional value={true}/>
            <Conditional value={false}/>
            <List/>
        </div>
    );
}
export default App;