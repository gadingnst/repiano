// The {j|...|j} feature is just string interpolation, from
// bucklescript.github.io/docs/en/interop-cheatsheet#string-unicode-interpolation
// This allows us to conveniently write CSS, together with variables, by
// constructing a string

let style = {j|
    *, *::before, *::after {
        box-sizing: border-box;
    }
    
    body {
        background-color: #5e72e4;
        margin: 0;
        min-height: 100vh;
        display: flex;
        justify-content: center;
        align-items: center;
    }
    
    .piano {
        display: flex;
    }
    
    .key {
        height: calc(var(--width) * 4);
        width: var(--width);
    }
    
    .white {
        --width: 100px;
        background-color: white;
        border: 1px solid #333;
    }
    
    .white.active {
        background-color: #CCC;
    }
    
    .black {
        --width: 60px;
        background-color: black;
        margin-left: calc(var(--width) / -2);
        margin-right: calc(var(--width) / -2);
        z-index: 2;
    }
    
    .black.active {
        background-color: #333;
    }
|j};