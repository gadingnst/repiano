'use strict';

var React = require("react");
var ReactDom = require("react-dom");
var App$ReasonReactExamples = require("./App.bs.js");
var RootStyle$ReasonReactExamples = require("./RootStyle.bs.js");

var style = document.createElement("style");

document.head.appendChild(style);

style.innerHTML = RootStyle$ReasonReactExamples.style;

ReactDom.render(React.createElement(App$ReasonReactExamples.make, { }), document.getElementById("app"));

exports.style = style;
/* style Not a pure module */
