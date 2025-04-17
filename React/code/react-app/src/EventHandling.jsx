import React, { useState } from "react";

function EventHandling() {
  const handleClick = (e) => {
    console.log(e);
  };

  const [count, setCount] = useState(0)
  const handleClickParam = () =>{
    setCount(count+1)
  }

  return (
    <>
      <h1 onClick={handleClick}>click me</h1>
      <h2 onClick={handleClickParam}>a param</h2>
    </>
  );
}

export default EventHandling;
