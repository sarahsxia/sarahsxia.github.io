---
title: "Multimaterial Print-in-Place Pliers"
excerpt: "A dual-material 3D printed plier that uses a flexible TPU core and rigid PLA jaws and handles."
header:
  teaser: /assets/img/Plier_header.png
---

##### Introduction

Print in place is a unique advantage of additive manufacturing processes, allowing parts to contain joints, embedded objects, hinges, and other internal features. This capability of filament printing, and other techniques such as powder printing, combines thoughtful design and tests the limits of 3D printing. This article, [“Print-in-Place Tips”](https://core-electronics.com.au/guides/print-in-place-tips/), showcases the possibility of 3D printing in-place mechanisms, such as bearings within a ring. In a similar sense, there are also many recreational models online such as a [lizard](https://www.thingiverse.com/thing:3505006) that have joints in them, creating multi-part but connected objects. 

In a more complex printer, especially one that can print multiple materials at once, it’s important to consider the desired adherence and compatibility of materials. This article, [“Try These Filament Combinations for Multi-Material and Supports”](https://toms3d.org/2024/12/06/try-these-filament-combinations-for-multi-material-and-supports/), compares the adhesion for filament printing plastics PLA, PETG, ABS, ASA, and Flex. They found that the easiest material to separate from Flex, comparable to TPU 95A used in Digital Fabrication Lab, is PLA. Other materials such as PETG, ABS, ASA are fully welded or require high force to separate. For the possibility that some users will print with a dual extruder printer, it’s helpful to select materials that are not prone to sticking when printing in place, as this issue is said to be one of the main struggles of printing in place in general.

---

##### Model design and iterative process

###### Prototype 1

**Design methodology**

The design methodology behind this multimaterial plier is a rigid plier that will rely on a flexible centerpiece to open and close. The centerpiece is attached to the jaws and handles by dovetail joints, 3 on each side of the square centerpiece to support the flexible motion. The centerpiece also features clearance cuts to allow for motion. The selected materials for this print are PLA and TPU, using PLA for its rigid properties for the jaws and handles, and TPU for its flexible properties in the centerpiece. 

Outside of function, this plier is designed to look like commercial pliers to be recognizable despite the 3D printed body and the unconventional centerpiece. The chamfers allow the pliers to be more ergonomic for repetitive use.

**Design features**

- 20&nbsp;×&nbsp;20&nbsp;mm centerpiece  
- Dovetail at 45° with centerpiece (trapezoid)  
  - 1.41&nbsp;mm long, 1.60&nbsp;mm and 4.43&nbsp;mm wide  
- Jaws are 50&nbsp;mm long, and tips are 36.4&nbsp;mm apart (capacity)  
- Handle is 100&nbsp;mm long  
- Clearance cuts 4&nbsp;mm into the corners of the centerpiece  
- Clearance of 15&nbsp;mm between dovetail and jaws and handles  
- Chamfer of 3&nbsp;mm on the edges  
- Tip is 5&nbsp;mm long and ~10&nbsp;mm wide  

**Print settings**

All gcode was produced using Superslicer 2.7 – beta, and all printing used a 0.6&nbsp;mm nozzle on Voron 3D filament printers – single extrusion.

PLA parts  
- Perimeters count: 3  
- Top and bottom solid layers: 3  
- Infill: 13%, Rectilinear  

TPU parts  
- Perimeters count: 3  
- Top and bottom solid layers: 0  
- Infill: 18%, 23%, 25% using Rectilinear  

Other than the noted parameters, no changes were made to other printing parameters. TPU and PLA parts were printed on separate filament printers.

![Plier prototype 1]({{ '/assets/img/Plier_prototype_1png.png' | relative_url }})

*Figure 1. Plier prototype 1 with infill centerpieces 18%, 25%, and 23% (left to right).*

This prototype succeeded in that the design was ergonomic and aesthetically appealing, and the parts were able to fit together, and the tip was a sufficient size to hold small objects such as nuts, bolts, and transistors. However, it failed to function in that the handles would snap off if they were clamped. This was due to the dovetail joints being too shallow, and when clamping the handles at least one part would fall off before the handles met. Another weakness of the design was that the jaws couldn’t close completely. From this design, I decided to change the distance of the jaw tips to keep the original length of the pliers. The iterations of TPU centerpiece infills were in the end not applicable because I changed the type of infill to Grid in the next iteration for its improved extrusion pattern and layer coherence.

---

###### Prototype 2

**Modified design features**

- New dovetail design (longer and thinner)  
  - 2.84&nbsp;mm long, 1.05&nbsp;mm and 3&nbsp;mm wide  
- The jaws are located closer together, now 17.56&nbsp;mm apart (capacity)  
- Increased the width of the tongs for aesthetic appeal with tongs being closer  

**Kept the same**

- Length of jaws and handles  
- Clearance and chamfer edges and intensities  

**Print settings**

TPU  
- Infill 20%, 23%, 25% using Grid  

All other printing parameters were kept the same as prototype 1.

![Plier prototype 2]({{ '/assets/img/Plier_prototype_2.png' | relative_url }})

*Figure 2. Plier prototype 2 with infill centerpieces 20%, 25%, and 23% (left to right).*

Unfortunately, this prototype did not print correctly due to CAD errors. It was missing the bottom two dovetails and the handles could not fit with the centerpiece. However, it was an educational iteration because the new dovetail design was much stronger, and could hold the parts together even under intense pressing. The new batch of TPU centerpieces were all functional from this prototype. This iteration was also able to confirm that the current clearance given between the dovetail and the jaws and handles are adequate.

---

###### Prototype 3 (Final)

**Modified design features**

- Dovetail pattern in CAD:  
  - Previously: Quantity = 12, Distance = 73.82&nbsp;mm, Distribution = Extent  
  - Now: Quantity = 12, Distance = 6.685&nbsp;mm, Distribution = Spacing  

Changes were made to the patterning of the dovetail pattern to fix the CAD error, but this additional change was implemented to improve even spacing between the dovetails for accurate mirroring and consistent clearance.

**Printing**

- Only PLA parts were printed for this iteration (jaws and handles), and print settings are the same as prototypes 1 and 2.

![Plier prototype 3]({{ '/assets/img/Plier_prototype_3.png' | relative_url }})

*Figure 3. Plier prototype 3 with infill centerpiece 20% (from prototype 2).*

Finally, once this iteration’s PLA jaws and handles were printed, the dovetails were able to fit into the centerpiece, and the centerpiece with 20% infill density was selected based on the print quality, but any of the 3 infill densities (20–25%) would function for the purpose of the plier. The gif below shows the plier picking up a nut.

![Plier prototype 3 picking up a nut]({{ '/assets/img/Plier_prototype_3.gif' | relative_url }})

*Figure 4. Animated demonstration of plier prototype 3 in use, picking up a nut.*

---

##### CAD model of pliers

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b6028111e9f4372bbf8ebb5" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

{% include gallery caption="Multimaterial Print-in-Place Plier CAD Assembly" %}

---

##### References

[1] Core Electronics. “Print-in-Place Tips.” <https://core-electronics.com.au/guides/print-in-place-tips/>  
[2] Thingiverse. “Articulated Lizard.” <https://www.thingiverse.com/thing:3505006>  
[3] Tom’s 3D. “Try These Filament Combinations for Multi-Material and Supports.” <https://toms3d.org/2024/12/06/try-these-filament-combinations-for-multi-material-and-supports/>  
[4] Autodesk 360. “Multimaterial Pliers CAD Model.” <https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b6028111e9f4372bbf8ebb5>

