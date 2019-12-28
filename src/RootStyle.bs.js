'use strict';


var style = "\n    *, *::before, *::after {\n        box-sizing: border-box;\n    }\n    \n    body {\n        background-color: #5e72e4;\n        margin: 0;\n        min-height: 100vh;\n        display: flex;\n        justify-content: center;\n        align-items: center;\n    }\n    \n    .piano {\n        display: flex;\n    }\n    \n    .key {\n        height: calc(var(--width) * 4);\n        width: var(--width);\n    }\n    \n    .white {\n        --width: 100px;\n        background-color: white;\n        border: 1px solid #333;\n    }\n    \n    .white.active {\n        background-color: #CCC;\n    }\n    \n    .black {\n        --width: 60px;\n        background-color: black;\n        margin-left: calc(var(--width) / -2);\n        margin-right: calc(var(--width) / -2);\n        z-index: 2;\n    }\n    \n    .black.active {\n        background-color: #333;\n    }\n";

exports.style = style;
/* No side effect */
