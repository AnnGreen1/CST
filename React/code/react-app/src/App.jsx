import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";

import Hello from "./Hello";
import EventHandling from "./EventHandling";
import RenderElement from "./RenderElement";

import JSX from "./JSX";
import Expression from "./Expression";

import Style from "./Style";
import Comment from "./Comment";
import Array from "./Array";
import Props from "./Props/Props";
import DestructProps from "./Props/DestructureProps";
import ClassCom from "./ClassCom";
import LifeCycle from "./LifeCycle";
import Events from "./Props/Events";
import ConditionRendering from "./ConditionalRendering";
import RenderingLists from "./RenderingLists";

function App() {
  const [count, setCount] = useState(0);

  function onAnswerNo(e) {
    console.log("onAnswerNo", e);
  }

  function onAnswerYes(e) {
    console.log("onAnswerYes", e);
  }
  return (
    <>
      <div>
        <a href="https://vite.dev" target="_blank">
          <img src={viteLogo} className="logo" alt="Vite logo" />
        </a>
        <a href="https://react.dev" target="_blank">
          <img src={reactLogo} className="logo react" alt="React logo" />
        </a>
      </div>
      <h1>Hello, Vite + React</h1>
      <div className="card">
        <button onClick={() => setCount((count) => count + 1)}>
          count is {count}
        </button>
        <p>
          Edit <code>src/App.jsx</code> and save to test HMR
        </p>
      </div>
      <p className="read-the-docs">
        Click on the Vite and React logos to learn more
      </p>
      <Hello />
      <Hello></Hello>

      <EventHandling />

      <RenderElement />

      <JSX />

      <Expression />

      <Style />

      <Comment />

      <Array />

      <Props name="React" />

      <DestructProps firstName="Tim" lastName="Cook" />

      <ClassCom />

      <LifeCycle />

      <Events onYes={onAnswerYes} onNo={onAnswerNo} />

      <ConditionRendering num="3" />

      <RenderingLists />
    </>
  );
}

export default App;
