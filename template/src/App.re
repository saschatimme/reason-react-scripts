let logo : string = [%bs.raw {|require("../../../src/logo.svg")|}];
let css : string = [%bs.raw {|require("../../../src/App.css")|}];


module App = { 
  include ReactRe.Component;
  type props = unit;
  let name = "App";

  let render { props } => {
      <div className="App">
        <div className="App-header">
          <img src={logo} className="App-logo" alt="logo" />
          <h2>(ReactRe.stringToElement "Welcome to Reason-React")</h2>
        </div>
        <p className="App-intro">
          (ReactRe.stringToElement "To get started, edit ")
          <code>(ReactRe.stringToElement "src/App.re")</code>
          (ReactRe.stringToElement " and save to reload.")
        </p>
      </div>
  }
};

include ReactRe.CreateComponent App;

let createElement = wrapProps ();