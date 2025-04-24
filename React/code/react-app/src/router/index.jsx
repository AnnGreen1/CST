import { createBrowserRouter } from "react-router-dom";
import Layout from "../layout";
import Home from "../Home";
import About from "../About";
import TicTacToe from "../views/tic-tac-toe"

const router = createBrowserRouter([
  {
    path: "/",
    element: <Home />,
  },
  {
    path: "home",
    element: <Home />,
  },
  {
    path: "about",
    element: <About />,
  },
  {
    path: "tic-tac-toe",
    element: <TicTacToe />,
  },
]);

export default router;
