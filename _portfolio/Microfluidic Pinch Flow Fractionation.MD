---
title: "Microfluidic Pinch Flow Fractionation"
excerpt: "A resin-printed microfluidic device for particle separation using pinch flow fractionation (PFF) principles."
---

##### Introduction

Effective particle separation is difficult to achieve at the micrometer scale. This microfluidic device was designed to achieve separation of particles that fall within two size ranges:

125–150 µm  
425–500 µm

The device performs separation based on the theory of pinch flow fractionation (PFF). Pinch flow fractionation works by pinching together fluid streams with and without particles, causing the particle path in the broad segment to follow the linear amplification of flow [1]. The core principle behind this is laminar flow, the dominant flow regime in microfluidic devices.

This relationship can be described by Equation (1), where Y₀ is the particle destination along the broad segment, wₚ is the width of the pinched point, w_b is the width of the broad section, and D is the particle diameter:

Y₀ = (wₚ − D/2) × (w_b / wₚ)    (1)

![Resin printed mold](/assets/img/Resin%20printed%20mold.png)

*Figure 1. Resin printed microfluidic device mold.*

---

##### Design

This microfluidic device was designed from an asymmetric approach. The goal was to have a total of three fluid outlets: small particle, large particle, and buffer fluid. Since calculated Y₀ values of the particles were close to each other, the fluid exits to collect them were clustered at the top. The goal was to have the highest fluid flow at the path of the buffer fluid, and the lowest fluid flow at the path of the small particle.

To minimize variables, the path widths were kept the same while the length varied. Therefore, under these circumstances the longest path had the greatest resistance and collected the least flow along the top, to catch the small particle. As a byproduct of this theory, the middle channel is a medium length and the bottom channel is the shortest length, to collect an ascending amount of fluid. The large particle is expected to exit through the middle channel due to the position calculation from Equation (1). The outlets were arranged to the right of the broad section, and allow for three nozzle heads (11 mm diameter) to fit. In addition, there must be ≥3 mm from the printed device to the outside edge of the mold to achieve structural integrity.

![Casted device](/assets/img/Casted%20device.png)

*Figure 2. Casted microfluidic device.*

During iteration of this design, the flow of the top channel collected minimal flow. For future iterations, all channels could be shortened to lessen the resistance difference between the channels. Otherwise, the placements of the print were functional and allowed for resin print success. In future iterations, the height of the channels and broad section could be reduced (e.g., from 1.5 mm to 1 mm) and the broad section elongated, since both factors would limit turbulent flow.

[Design sketch (PDF)](/assets/img/Sketch.pdf)

*Figure 3. Sketch of device design showing critical dimensions of channels and device.*

---

##### Instructions

This microfluidic device was created on a bottom-up resin printer. The support and build plate should be parallel and in contact with the bottom side of the device, to minimize layer lines and surface imperfections in the final mold. The user can print with a printer whose resolution allows for the minimum feature size (1 mm).

It’s also important to consider the post-processing of the device. Since the resin will be used as a mold, any absorbed IPA can potentially influence the PDMS. Therefore, the maximum single-time wash period is 5 minutes, and the maximum total wash time is 15 minutes. The device should be allowed to dry completely between washes. The mold should then be cured for 60 seconds under UV light with no heat.

Before molding, the user should check that there are no debris or deformities on the inside of the cured mold. Then, the supports can be removed, and the user can create the final device. Since PDMS molding instructions are available online, they will not be included as part of this page.

![Plasma treating of PDMS mold](/assets/img/Plasma%20treating.jpg)

*Figure 4. Plasma treating of PDMS mold showing glass panel attachment.*

---

##### Interactive CAD Model (Fusion 360)

https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b602811fa229e6e54e25355

---

##### Discussion

Resin printing was selected to create the mold for the microfluidic devices because it has high printing resolution and the lowest porosity and surface roughness in comparison with accessible manufacturing techniques such as FFF, pSLS, and laser cutting. The high resolution and smooth surface finish are critical to the functionality of pinched fractional flow as well as general flow within microfluidic devices.

The same theory of pinched fractional flow in microfluidic devices can be applied to separate a higher number of particles. This device design could be scaled to have more outlets, placed at the calculated positions along the broad section to collect streams. Since the base principle relies on the difference of position and resistance of the channels, more particles can be incorporated into the separation process by rearranging the channels but keeping the current broad section, channel widths, and flow setup.

If a scale-up or scale-down is required, it’s important to monitor the flow regime to retain laminar flow (Re ≪ 1). Another limit to the scale-up or scale-down of pinched fractional flow in this microfluidic device is that the channel width (currently 1 mm) should be 1.2–1.5× larger than the largest particle. This limits the potential of particles clogging in the inlet and outlet channels as well as turbulent flow.

---

##### References

[1] https://pubs.acs.org/doi/10.1021/ac049863r  
[2] https://pmc.ncbi.nlm.nih.gov/articles/PMC10415021/
