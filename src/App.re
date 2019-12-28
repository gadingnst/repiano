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

    let copyrightStyle = ReactDOMRe.Style.make(
        ~opacity="0",
        ~transition="opacity 1s",
        ()
    );

    <>
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
        <h4 style>{React.string("Built with Bullshit by Sutan Nasution.")}</h4>
    </>
}
