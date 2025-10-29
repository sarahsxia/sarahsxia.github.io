---
title: "Microfluidic Pinch Flow Fractionation"
excerpt: "A resin-printed microfluidic device for particle separation using pinch flow fractionation (PFF) principles."
---

##### Introduction

Effective particle separation is difficult to achieve at the micrometer scale. This microfluidic device was designed to achieve separation of particles that fall within two size ranges:

<p align="center">
125–150&nbsp;µm<br>
425–500&nbsp;µm
</p>

The device performs separation based on the theory of pinch flow fractionation (PFF). Pinch flow fractionation works by pinching together fluid streams with and without particles, causing the particle path in the broad segment to follow the linear amplification of flow [1]. The core principle behind this is laminar flow, the dominant flow regime in microfluidic devices.

This relationship can be described by Equation&nbsp;(1), where *Y*<sub>0</sub> is the particle destination along the broad segment, *w*<sub>p</sub> is the width of the pinched point, *w*<sub>b</sub> is the width of the broad section, and *D* is the particle diameter:

<p align="center">

$$
Y_0 = \left(w_p - \frac{D}{2}\right)\,\frac{w_b}{w_p} \tag{1}
$$

</p>

Bacteria enumeration is a primary health hazard in food processing and storage, and it’s important for food safety inspection and environmental samples (such as drinking water) to extract live bacteria for further study. One study applied PFF in a spiral microfluidic device to separate bacterial cells in meat swab samples and achieved an average recovery efficiency of 80% for bacterial cells [2]. This method increased test speed and preserved cell viability compared to traditional filtering and centrifugation methods, which often cause clogging and cell death.

<p align="center">
  <img src="assets/img/Resin%20printed%20mold.png" alt="Resin printed mold" width="420">
</p>

*Figure 1. Resin printed microfluidic device mold.*

---

##### Design

This microfluidic device was designed from an asymmetric approach. The goal was to have a total of three fluid outlets: small particle, large particle, and buffer fluid. Since calculated *Y*<sub>0</sub> values of the particles were close to each other, the fluid exits to collect them were clustered at the top. The goal was to have the highest fluid flow at the path of the buffer fluid, and the lowest fluid flow at the path of the small particle.

To minimize variables, the path widths were kept the same while the length varied. Therefore, under these circumstances the longest path had the greatest resistance and collected the least flow along the top, to catch the small particle. As a byproduct of this theory, the middle channel is a medium length and the bottom channel is the shortest length, to collect an ascending amount of fluid. The large particle is expected to exit through the middle channel due to the position calculation from Equation&nbsp;(1). The outlets were arranged to the right of the broad section, and allow for three nozzle heads (11&nbsp;mm diameter) to fit. In addition, there must be ≥3&nbsp;mm from the printed device to the outside edge of the mold to achieve structural integrity.

---

##### Instructions

This microfluidic device was created on a bottom-up resin printer. The support and build plate should be parallel and in contact with the bottom side of the device, to minimize layer lines and surface imperfections in the final mold. The user can print with a printer whose resolution allows for the minimum feature size (1&nbsp;mm).

It’s also important to consider the post-processing of the device. Since the resin will be used as a mold, any absorbed IPA can potentially influence the PDMS. Therefore, the maximum single-time wash period is 5&nbsp;minutes, and the maximum total wash time is 15&nbsp;minutes. The device should be allowed to dry completely between washes. The mold should then be cured for 60&nbsp;seconds under UV light with no heat.

Before molding, the user should check that there are no debris or deformities on the inside of the cured mold. Then, the supports can be removed, and the user can create the final device. Since PDMS molding instructions are available online, they will not be included as part of this page. A photo of the plasma treating of the PDMS mold showing the glass panel it is attached to is shown below.

<p align="center">
  <img src="assets/img/Plasma%20treating.jpg" alt="Plasma treating of PDMS mold" width="420">
</p>

*Figure 2. Plasma treating of PDMS mold showing glass panel attachment.*

---

##### Discussion

Resin printing was selected to create the mold for the microfluidic devices because it has high printing resolution and the lowest porosity and surface roughness in comparison with accessible manufacturing techniques such as FFF, pSLS, and laser cutting. The high resolution and smooth surface finish are critical to the functionality of pinched fractional flow as well as general flow within microfluidic devices.

The same theory of pinched fractional flow in microfluidic devices can be applied to separate a higher number of particles. This device design could be scaled to have more outlets, placed at the calculated positions along the broad section to collect streams. Since the base principle relies on the difference of position and resistance of the channels, more particles can be incorporated into the separation process by rearranging the channels but keeping the current broad section, channel widths, and flow setup.

If a scale-up or scale-down is required, it’s important to monitor the flow regime to retain laminar flow (*Re* ≪ 1). Another limit to the scale-up or scale-down of pinched fractional flow in this microfluidic device is that the channel width (currently 1&nbsp;mm) should be 1.2–1.5× larger than the largest particle. This limits the potential of particles clogging in the inlet and outlet channels as well as turbulent flow.

---

##### References

[1] https://pubs.acs.org/doi/10.1021/ac049863r  
[2] https://pmc.ncbi.nlm.nih.gov/articles/PMC10415021/
