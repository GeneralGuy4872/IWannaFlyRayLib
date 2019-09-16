#Don't remember the exact regex syntax, using generic unix metalanguage for groups until I get here
NOTE [A-G][01-9][#%b]?
KEYSIG ([#]+|[b]+|[A-G][#%b]?)?

NUMBER [01-9]+
HEX (0x|$)[01-9a-fA-F]+
OCTAL @[01-7]+
NEWLINE [\n]
SPACE [ ]
TAB [\t]
POSTFIX (++|--)

"SPEED"
"KEY"
"DETUNE"
"NOTE"
"CUT"
"INSTRUMENT"
"VOLUME"
"MUTE"
"FORTE"
"ON"
"OFF"
"SUSTAIN"
"WAIT"
"END"
"LOOP"
"REPEAT"
"RAW"

/*
syntax:

SPEED <HEX/OCTAL/NUMBER> : number of pulses per second. there are 24 pulses in a quarter note.

VOLUME <HEX/OCTAL/NUMBER channel> <HEX/OCTAL/NUMBER volume> : set how loud a channel is

SPEED++ <HEX/OCTAL/NUMBER channel amount> , VOLUME++ <HEX/OCTAL/NUMBER channel amount> , DETUNE++ <HEX/OCTAL/NUMBER channel> <HEX/OCTAL/NUMBER channel amount> : increase a paramater

SPEED-- <HEX/OCTAL/NUMBER channel amount> , VOLUME-- <HEX/OCTAL/NUMBER channel amount> , DETUNE-- <HEX/OCTAL/NUMBER channel> <HEX/OCTAL/NUMBER channel amount> : decrease a paramater

MUTE <HEX/OCTAL/NUMBER channel> : set volume to zero

FORTE <HEX/OCTAL/NUMBER channel> : set volume to maximum

KEY <HEX/OCTAL/NUMBER channel>  <KEYSIG> : change the key. default key is C major

INSTRUMENT <HEX/OCTAL/NUMBER channel, not ten or eleven> <HEX/OCTAL/NUMBER voice> : set the instrument program of the channel

SUSTAIN <HEX/OCTAL/NUMBER channel> : toggle sustain

DETUNE ON <HEX/OCTAL/NUMBER channel> <HEX/OCTAL/NUMBER amount> : warp the tone by an amount

DETUNE OFF <HEX/OCTAL/NUMBER channel> : reset detuning

NOTE (ON|OFF) <HEX/OCTAL/NUMBER channel> <NOTE value> <HEX/OCTAL/NUMBER velocity> : begin/end a note

CUT <HEX/OCTAL/NUMBER channel> : end all notes on a channel

WAIT <HEX/OCTAL/NUMBER> : wait for a given number of pulses. wait deleminaits bursts of packets, affording time control sanity.

...
...
...
END : end the song; a program may not expect the song to end, which would result in there being no sound after the end is reached.

...
...
LOOP
...
...
...
REPEAT : loop a portion of the song indefinately.

RAW <HEX> : a raw packet
*/