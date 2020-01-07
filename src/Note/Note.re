[@bs.val] external document: Js.t({..}) = "document";

[@react.component]
let make = (~note: string, ~color: string) => {
    <div
        id=("key-"++note)
        className=("key "++color)
        onClick=(_ => {
            let keyNote = document##getElementById("key-"++note)##classList;
            let audioNote = document##getElementById("audio-"++note);
            audioNote##currentTime #= 0;
            keyNote##add("active");
            audioNote##play();
            audioNote##addEventListener("ended", _ => {
                keyNote##remove("active");
            });
        })
    >
        <audio id=("audio-"++note) src=("notes/"++note++".mp3") />
    </div>
}