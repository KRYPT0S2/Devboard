---
title: "Devboard"
github: ""
description: "As the name suggests, a development board, just following a guide to learn more about compact board development and how to use different parts together (unlike the repetitive wiring of the split keyboard TT)"
created_at: "2026-11-11"
total_time: "20h 48m"
---

# November 11, 2026: Just decided on the parts

As the title says, i researched for a bit and landed on a part list, i am going to use the RP 2040 because, why not (i do not want to copy the tutorial 1 to 1 its boring just doing it directly TT)
![](https://fabricate.hackclub-assets.com/3e2f23ad2dada0d6e8a8b362dfb32d519d65ea8c7462db88151ffd89b6f0cebe/image-png/image.png)

**Total time spent: 1h**

# November 12, 2026: Wired the UCB receptacle

As the title says, i just wired up the USB receptable to the RP 2040 (along with connecting some of the pins to wire and GND along with adding a voltage regulator
Disclaimer: i used AI to recheck my design and wiring was correct
![](https://fabricate.hackclub-assets.com/1e4dee9336ae8c9dc2a84eb6abff43125bc5f1b699f5e8877eb05fb2e018addf/image-png/image.png)
(it took me way too long to find out what parts to use T-T)

**Total time spent: 3h**

# November 12, 2026: Added capacitors

![](https://fabricate.hackclub-assets.com/075b58059fba88590936f367eca1368d4682ca7199a93017ce2645622a295155/image-png/image.png)
realized that there are multiple pins shown as one, so added capacitors for each one of them, going to add the quartz crystal next also added the connectors, i just need to make labels now
![](https://fabricate.hackclub-assets.com/21287381ca6bae8aa7974be48f6606a53fe09fe5eb5cc7194d7f57c9f45c2aa9/image-png/image.png)

**Total time spent: 42m**

# November 13, 2026: Added global labels and flash memory

![](https://fabricate.hackclub-assets.com/eefdced8b990c63281f557314e291c5db468c2ada65d9de7d64fa1e9249a30e7/image-png/image.png)
added global labels to the components, took me way too long because i wanted to make it accurate and easily readable TT
![](https://fabricate.hackclub-assets.com/2ae7b722c05da4f5c7ffdb1d6c0ff6b7a1452f46ade04ccb5576b9c94152c6f7/image-png/image.png)
also added some flash memory its 16 mb so should be enough

**Total time spent: 3h 30m**

# November 15, 2026: Project files go poof

Well I accidently deleted my project folder while clearing out storage space, so I will probably have to remake the project again (I won't track those hours since I will just straight copy from the screenshots in my journal entries) im cooked TTTTT
(This is just an update I am typing from my phone because I am too tired to get up to go to my pc again after haven, so placeholder image)

![](https://fabricate.hackclub-assets.com/b33c6082d4fffff7ef92c300dac48429d5df73950be61c72f403563812643b70/image-jpeg/1000026904.jpg)

**Total time spent: 6m**

# November 16, 2026: Quartz crystal, PCB

![](https://fabricate.hackclub-assets.com/be9ebcd66fc1caefba2ca99f2ace4ab23dc43017dfc95073bd0ecef4bc18bbdb/image-png/image.png)
Added a quartz crystal with capacitors for keeping track of time, also started making a PCB (still assigning footprints to the symbols because for some reason kicad didnt TT)

**Total time spent: 30m**

# November 17, 2026: Started wiring the PCB

Straight AHH wiring TT

![](https://fabricate.hackclub-assets.com/dc4a5d5d9d958473ac25982c822ac396467c7d084b444e7f6cf3264d8627520b/image-png/image.png)
this is literally just "drag wire, create via where needed, drag wire again" BUTTTT afaik, it should be fineeee, the DRC shows no errors (other than the unconnected items obv) and AI doesnt say anything should be wrong (idk who has enough time to sanity check THIS MONSTROSITY) 
DISCLAMER: i used AI for rechecking the design

**Total time spent: 4h 30m**

# November 18, 2026: Ts so complex i had to wire GND terminals, and PCB completed

Genuinely HOW
![](https://fabricate.hackclub-assets.com/45bbc40109bf41ed02e2bac5604a5e33f7019a087d9dfdbc45b59235bd76b22e/image-png/image.png)
i had to wire some GND terminals together because the GND fill zone couldn't reach them, tight wiring shouldn't be a problem because i will probably order a PCBA, i WILL add silkscreen graphics (IF I HAVE THE TIME), oh and i completed and troubleshooted the PCB

**Total time spent: 5h 30m**

# November 22, 2026: Fixed some wiring, and Silkscreen

![](https://fabricate.hackclub-assets.com/f114e007e05906ac4513c13639a189d224954f113f1e11fe93af0a4ee0590ee5/image-png/image.png)
so uh i was dumb and didnt know my wiring was wrong (Vbus was not originally connected along with a +1 pin being connected to +3v3) 
# Live. Larp. Lie.
![](https://fabricate.hackclub-assets.com/47aca3105965bd1692d8753a9db22af9bf0d311ac816f4a31b8f309e99852bfd/image-png/image.png)
![](https://fabricate.hackclub-assets.com/7110200841f408f772d3e02a97abb03e0d52cac27847c6766d945d07d0aa2ff5/image-png/image.png)
(just added some graphics to the PCB)

**Total time spent: 2h**
