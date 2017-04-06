let css : string =  [%bs.raw {|require("../../../src/index.css")|}];
let root = ReasonJs.Dom.Document.getElementById "root" ReasonJs.Dom.document;

switch (root) {
| Some root => ReactDOMRe.render <App /> root;
| None => ()
}