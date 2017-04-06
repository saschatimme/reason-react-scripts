open Jest;
open Expect;

test "renders without crashing" (fun () => {
  let div = ReasonJs.Dom.Document.createElement "div" ReasonJs.Dom.document;
  let render () => (ReactDOMRe.render <App /> div);
  expect render |> not_ |> toThrow;
});
