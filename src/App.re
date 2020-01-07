type key = {
    note: string,
    color: string
};

[@react.component]
let make = () => {
    let keys = [
        { note: "C", color: "white" },
        { note: "Db", color: "black" },
        { note: "D", color: "white" },
        { note: "E", color: "black" },
        { note: "Eb", color: "white" },
        { note: "F", color: "white" },
        { note: "Gb", color: "black" },
        { note: "G", color: "white" },
        { note: "Ab", color: "black" },
        { note: "A", color: "white" },
        { note: "Bb", color: "black" },
        { note: "B", color: "white" },
    ];

    <>
        <h1
            style=(ReactDOMRe.Style.make(
                ~textAlign="center",
                ~color="#fff",
                ~marginBottom="0",
                ()
            ))
        >
            {React.string("Simple piano kits built using ReasonML")}
        </h1>
        <hr
            style=(ReactDOMRe.Style.make(
                ~margin="8px auto 32px auto",
                ~color="#fff",
                ~width="75%",
                ()
            ))
        />
        <div className="piano">
            {ReasonReact.array(List.map(
                key =>
                    <Note
                        key=(key.note)
                        note=(key.note)
                        color=(key.color)
                    />,
                keys
            ) |> Array.of_list)}
        </div>
        <h4
            style=(ReactDOMRe.Style.make(
                ~textAlign="center",
                ~color="#fff",
                ()
            ))
        >
            {React.string("Built with Bullshit by Sutan Nasution.")}
        </h4>
    </>
}
