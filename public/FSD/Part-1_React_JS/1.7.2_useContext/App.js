import Parent from "./Parent"
import React from "react";
export const UserNameContext=React.createContext();
function App() {
  return (
    <div align="center">
      <UserNameContext.Provider value={"MVSR"}>
        <Parent/>
      </UserNameContext.Provider>
    </div>
  );
}
export default App;