import './App.css';
import Empprops from './propsdemo/Empprops';
import Studentcomp from './propsdemo/Studentcomp';
function App() {
  return (
    <div className="App">
      <Empprops name="John" eid={123} salary={6000}/>
      <Studentcomp/>
    </div>
  );
}
export default App;