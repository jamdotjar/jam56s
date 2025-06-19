# jam56s
A 56-key hotswap column-staggered split keyboard.

![image](https://github.com/user-attachments/assets/6b64aa6c-2258-4bae-b3bb-2e2fdf16ffd2)

*I'll replace this with a proper photo once it's built, but for now heres a quick render*

This is my first custom keyboard design, and my second hardware project. It was designed with a few goals in mind:
1. to be functional ( not broken, hard to break )
2. to be mine ( my own design, for my use case )
3. to be simple ( simple to use, simple to build )
4. to be something I'll actually use.

these were the basis of almost every decision I made while designing this. I chose a split layout because I already had a fairly nice 65% keyboard (the nuPhy air60 v2), I felt like anything too similar would fight for use (4). Secondly, I wanted to try and make a layout very personal to me, so this would be a truly from-scratch build (2). I used [ergopad](https://pashutk.com/ergopad/) to get a rough idea of what a good layout could be for me, then I used [ergogen](https://ergogen.xyz/) to quickly protoype my designs until I arrived at something I could copy in keycad. For the layout and physical design of the jam56s I took inspiration from the [lily58](https://github.com/kata0510/Lily58), the [Corne](https://github.com/foostan/crkbd), and the [ErgoTravel](https://github.com/jpconstantineau/ErgoTravel), among others. My main considerations were having enough keys for macros and modifiers, while not letting it get too big. The final layout is 6x(4-key column) + a 4 key thumb cluster. ( wired as a 7x4 matrix, see below )
wiring.

![image](https://github.com/user-attachments/assets/a49d1875-1219-4a13-951f-bcc2f9c81679)


The board includes:
- Per-key RGB
- 1 I2C breakout ( for an OLED )
- RJ45 split comms
- 
I Chose an RJ45 jack over the more common TRRS jack as it can be safely hotplugged while the board is on. I didn't want to have to handle a USBC plug, which also seemed like overkill and ran the risk of frying the keeb if it was used for anything other than split comms.

<img width="976" alt="image" src="https://github.com/user-attachments/assets/bb0e66f1-6460-4b0a-8784-0e9e3b1e6da0" />
<img width="718" alt="image" src="https://github.com/user-attachments/assets/86efa5a6-94c3-4b40-af6c-447ff0e2a92d" />

The case is mostly 3D printed, but you can late lasercut for better asthetics and rigidity. This was my first time using fusion so it's just a little bit jank. It's kinda an open-air sorta sandiwch design, I mainly just wanted to always be able to see the PCB.

BOM:
|Item|Quantity|Price|Source|Additional details|
|----|--------|-----|----|----------|
|PCB |2x5     |39.99| JLCPCB | 23.6 subtotal + 12.14 shipping + 4.25 tax |
|Plate|2      |35.67|SendCutSend|I Might be able to get it for cheaper locally, or in a diff material|
|Orpheus Pico|2|N/A|Hack Club|Can be replaced with other USCB pico clone|
|Kailh hot-swap socket|70|99c|Aliexpress|This is where the welcome deal seems to be placed right now |
|RJ45 Jacks|2|2.63 | Aliexpress | |
|RJ45 cable|1|1.72| Aliexpress | |
|.91 in oled| 2.22| Aliexpress | |
|1n4148 diodes|100|1.97| Aliexpress||
|0805 0.1uf capacitor|100|2.2|Aliexpress||
|SK6812mini-Es|100|6.26|Aliexpress||
|TTC bluish white v2|60|32.7|TorontoKeyboardMan|<alt pick is otemu silent yellow jade (0.22) or silent kitty (0.45)| 
|Keycaps | | | |
|M2.5 x 25mm screw |50|2.28|Aliexpress||
|M2.5x9mm spacer| 35 |2.78|Aliexpres|can also be 3d printed|
|Total| | | |
