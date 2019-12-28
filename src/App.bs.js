'use strict';

var List = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");
var Note$ReasonReactExamples = require("./Note/Note.bs.js");

function App(Props) {
  return React.createElement(React.Fragment, undefined, React.createElement("div", {
                  className: "piano"
                }, $$Array.of_list(List.map((function (key) {
                            return React.createElement(Note$ReasonReactExamples.make, {
                                        note: key.note,
                                        color: key.color,
                                        key: key.note
                                      });
                          }), /* :: */[
                          {
                            note: "C",
                            color: "white"
                          },
                          /* :: */[
                            {
                              note: "Db",
                              color: "black"
                            },
                            /* :: */[
                              {
                                note: "D",
                                color: "white"
                              },
                              /* :: */[
                                {
                                  note: "E",
                                  color: "black"
                                },
                                /* :: */[
                                  {
                                    note: "Eb",
                                    color: "white"
                                  },
                                  /* :: */[
                                    {
                                      note: "F",
                                      color: "white"
                                    },
                                    /* :: */[
                                      {
                                        note: "Gb",
                                        color: "black"
                                      },
                                      /* :: */[
                                        {
                                          note: "G",
                                          color: "white"
                                        },
                                        /* :: */[
                                          {
                                            note: "Ab",
                                            color: "black"
                                          },
                                          /* :: */[
                                            {
                                              note: "A",
                                              color: "white"
                                            },
                                            /* :: */[
                                              {
                                                note: "Bb",
                                                color: "black"
                                              },
                                              /* :: */[
                                                {
                                                  note: "B",
                                                  color: "white"
                                                },
                                                /* [] */0
                                              ]
                                            ]
                                          ]
                                        ]
                                      ]
                                    ]
                                  ]
                                ]
                              ]
                            ]
                          ]
                        ]))), React.createElement("h4", undefined, "Built with Bullshit by Sutan Nasution."));
}

var make = App;

exports.make = make;
/* react Not a pure module */
