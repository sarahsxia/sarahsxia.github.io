# Bike Phone Holder

## Top-down modeling
This phone holder prototype leverages a design process called top-down modeling, which begins with the overall assembly in mind. The starting concept of this project was a phone holder with an internal mechanism that would be fit for use on a bike handle. I sized components together physically so that it would make sense for the user of this tool, and rely on common mechanical parts for assembly. The critical measurements in the first step of this process were the bike handle, phone dimensions, and sizing an internal mechanism for rotation from available parts ( ball bearings and springs).

![Phone holder in render](Phone holder in render.png)

---

## **CAD Model (Autodesk Fusion 360)**
Interactive CAD Model:  
**https://a360.co/3LXfyFk**

---

## Design rationale
The core principle of this design is to create a rigid phone holder that will stay on the bike handle and have the user be able to insert or remove their phone without tools. The assembly process was also kept simple and accessible by using the minimal number of socket screws. The internal mechanism of is called a detent mechanism, which is a mechanical assembly of an inner piece that is locked in place by resistance. In this case, the resistance is provided by a compression spring and a ball bearing, so that when the user rotates their phone, it will only lock when the phone is vertical or horizontal.

![Detent physical](Detent-physical.png)

The corners of the internal piece are filleted so there is minimal resistance in rotating the phone, and the detent mechanism is still able to lock into place with a satisfying “click”. The prototypes of this design were printed using a filament 3D printer, capable of printing PLA and TPU. The main advantage of a filament 3D printer in this project was that it was quick to print prototypes and had relatively low post-processing time compared to other techniques such as resin and powder printing, and the material properties were suitable for the phone holder.

The are three main components of this system: the bike clamp, the detent internal piece, and the phone case. The bike clamp  and detent internal piece are printed from PLA for rigid performance requirements, and the phone case is printed from TPU so it can protect and hold the phone. 

During the prototyping process, I realized there were clearances needed and the correct placement of these clearances. Anywhere a screw passes through, there needs to be 0.5mm of clearance, “outlining” the shape of the screw. For rigid parts (PLA), the printing is more accurate to the CAD design, so there shouldn’t be too much clearance on the internal detent or the bike clamp. However, for flexible parts (TPU), there needs to be 1mm offset of width and height to fit the phone into the case. This formula worked well for the prototypes. However, for future prototypes I would make the bike clamp “ring” a smaller diameter, because I used too much clearance in this prototype.

![Phone holder render](Phone holder render.png)

As seen in the rendered image, there are only a few distinct points of connection from one piece to the other. The main components required for assembly are listed as follows:
- M3x8 (2)
- M5x16 (1)
- M5x20 (1)
- Compression spring (flexible range)  
  - Diameter 6-8mm  
  - Wire diameter 0.5-1mm  
  - Length (7-10mm)
- Ball bearing  
  - Diameter 8mm
- M5 Hex nut (2)

---

## Assembly instructions
- Add 2 heat set insert (M3x5.7) to detent mechanism internal piece
- Attach detent mechanism internal piece to phone case  
  - Attach 2x M3x8  
  - Attach 1x M5x16 
- Attach phone-detent to bike clamp  
  - Put M5x16 used previously through bike clamp detent external piece  
  - Lock with hex nut
- Put phone holder on bike handle
- Attach M5x20 to bike clamp  
  - Lock with hex nut

---

## Final prototype
![Side vertical](Side-vertical.png)  
![Back vertical](Back-vertical.png)  
![Back horizontal](Back-horizontal.png)  

![Phone holder demo](Phone holder demo.gif)
