---
title: "SLS Skateboard Truck and Motor Mount"
excerpt: "Generative-designed skateboard truck and motor mount comparing nylon (pSLS) and aluminum (AlSi10Mg) SLS outcomes under realistic load cases."
header: 
  teaser: assets/img/GDv4(1).png
---

Powder bed fusion (PBF) is an additive manufacturing technology that builds parts layer by layer by fusing powder with a high-powered laser. Selective laser sintering (SLS) is a subset of PBF that can print plastics (nylon) or metals (aluminum, steel, etc.). Although the methodology is similar, metal printing (mSLS) is much more stringent in its operating conditions than nylon printing (pSLS). 

##### Nylon assembly 						Aluminum assembly (AlSi10Mg)

![Nylon Assembly]({{ '/assets/GDv5nylon.png' | relative_url }})					![Aluminum Assembly]({{ '/assets/GDv5alum.png' | relative_url }})

3D printing and generative design work hand in hand: generative design creates organic geometries and nontraditional structures, and 3D printing makes it possible to manufacture them at a marketable cost without traditional tooling. There have been multiple applications in the automotive industry, especially since the partnership between General Motors and Autodesk. In 2018, General Motors redesigned a seat bracket from eight separate components into a single component using generative design and manufactures the part by 3D printing [1]. The new part is 40% lighter and 20% stronger than the original, showcasing the strengths of this combination of technologies, specifically in performance and part consolidation. 

The structural design of the skateboard truck was largely determined by the placement and magnitude of forces defined in the generative design workspace. First, the design was generated from preserved geometries, defined as regions to keep and connect, and avoiding the specified obstacle geometries. Second, the applied loads were placed on select faces such as the truck-wheel, top of pivot point cup, motor mount-rod to mimic real operating conditions for the skateboard. This includes action cases such as turning, kickflips, rider weight, motor weight, torque, and belt tension. I used a combination of physical intuition and ChatGPT (prompting for force intensity) to determine the location, type of force (remote/direct force, moment), and magnitude (based on the weight of a rider) for each structural load case. 

This workflow for generative design allows Fusion to handle the realistic loading scenarios the truck would experience. In practice this workflow allows the software to propose shapes that might not be obvious from a traditional design standpoint but are still mechanically efficient.

Some trial and error was involved, especially in determining the magnitude of the forces on the motor mount and the pivot cup. In addition, the presence of a compression force at the pivot point was not obvious to me at first and required iteration to model accurately. In the early generated iterations, the lack of mechanical compensation appeared as thin, weak-looking structures in materials such as aluminum (AlSi10Mg), rather than as solid pole or pillar-like structures. After increasing all of the applied forces to approximately 400 N (~90 lbf), the resulting structure appeared more robust and similar to common manufactured skateboard trucks. 

Three materials were explored using the unrestricted manufacturing method in Fusion: nylon and aluminum. Nylon is the actual printed material produced by the pSLS printer in the Digital Fabrication Lab, while aluminum represents realistic end-use products. Although a nylon part can technically survive the load cases, it would likely be too brittle for long-term use and would degrade significantly after relatively few cycles under real riding conditions. 

##### Prototype – Aluminum outcome printed in nylon

![Prototype view 1]({{ '/assets/img/GDv4(1).png' | relative_url }}) ![Prototype view 2]({{ '/assets/img/GDv4(2).png' | relative_url }}) ![Prototype view 2]({{ '/assets/img/GDv4(2).png' | relative_url }})

My printed prototype is the metal version of that iteration, as a mockup of the manufactured part. However, the pictured part did not fit on the truck, so the final iteration is different, mainly in the centerpiece placement. Originally, the centerpiece was aligned with the pivot cup center; now it is shifted forward with a larger inner cutout. This change lets the part sit in the pivot cup and swing over the kingpin, which the earlier, smaller cutout and original location did not allow. 

The structural outcomes for nylon and aluminum are dramatically different. In the nylon model, most of the truck is filled in with material, since nylon is more prone to fracture and the structure must compensate by being overly bulky. 

##### Nylon CAD model

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b60281120729734ed72e35b" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

In the aluminum outcome, the truck has more open space and distinct joints where forces intersect, making it easier to interpret the mechanical strengths and weaknesses of the structure and to visualize stress paths.

##### Aluminum CAD model

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b6028113587e9ac0a321402" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

As additive manufacturing becomes more commercialized, exponentially more geometries can be produced for high-performance products in high-performance industries (automotive, aerospace, etc.). Generative design can enable greater creativity and faster design iteration cycles than a traditional workflow but require a lot more iterations until the final product. Evaluating these designs still require experienced engineers and physical testing to validate safety and manufacturability. As a result, industries with high-cost, high-performance products are currently best positioned to justify the extra design, testing, and manufacturing expense. Overall, plastic prototypes are mainly useful for visualization, while metal printing is often required to fully capture the performance benefits of generative design.

##### References

Additive Manufacturing. (n.d.). GM seat bracket made with Autodesk generative design software. https://www.additivemanufacturing.media/news/gm-seat-bracket-made-with-autodesk-generative-design-software

##### Additional Information

Printed CAD model (AlSi10Mg outcome printed in nylon) 

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b602811b26aee7468595515" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

Printed Assembly 

![Printed Assembly]({{ '/assets/GDv4alum.png' | relative_url }})
