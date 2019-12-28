[@bs.val] external document: Js.t({..}) = "document";

let style = document##createElement("style");
document##head##appendChild(style);
style##innerHTML #= RootStyle.style;

ReactDOMRe.render(
    <App />,
    document##getElementById("app"),
);
