'use strict';

var React = require("react");

function Note(Props) {
  var note = Props.note;
  var color = Props.color;
  return React.createElement("div", {
              className: "key " + color,
              id: "key-" + note,
              onClick: (function (param) {
                  var keyNote = document.getElementById("key-" + note).classList;
                  var audioNote = document.getElementById("audio-" + note);
                  audioNote.currentTime = 0;
                  keyNote.add("active");
                  audioNote.play();
                  return audioNote.addEventListener("ended", (function (param) {
                                return keyNote.remove("active");
                              }));
                })
            }, React.createElement("audio", {
                  id: "audio-" + note,
                  src: "notes/" + (note + ".mp3")
                }));
}

var make = Note;

exports.make = make;
/* react Not a pure module */
