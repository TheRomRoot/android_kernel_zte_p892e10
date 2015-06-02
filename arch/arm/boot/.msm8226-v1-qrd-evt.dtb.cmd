cmd_arch/arm/boot/msm8226-v1-qrd-evt.dtb := /home/algesat/kernel/scripts/dtc/dtc -O dtb -o arch/arm/boot/msm8226-v1-qrd-evt.dtb -b 0  -d arch/arm/boot/.msm8226-v1-qrd-evt.dtb.d arch/arm/boot/dts/msm8226-v1-qrd-evt.dts

source_arch/arm/boot/msm8226-v1-qrd-evt.dtb := arch/arm/boot/dts/msm8226-v1-qrd-evt.dts

deps_arch/arm/boot/msm8226-v1-qrd-evt.dtb := \
  arch/arm/boot/dts/msm8226-v1.dtsi \
  arch/arm/boot/dts/msm8226.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/msm8226-ion.dtsi \
  arch/arm/boot/dts/msm8226-camera.dtsi \
  arch/arm/boot/dts/msm-gdsc.dtsi \
  arch/arm/boot/dts/msm8226-iommu.dtsi \
  arch/arm/boot/dts/msm-iommu-v1.dtsi \
  arch/arm/boot/dts/msm8226-smp2p.dtsi \
  arch/arm/boot/dts/msm8226-gpu.dtsi \
  arch/arm/boot/dts/msm8226-bus.dtsi \
  arch/arm/boot/dts/msm8226-mdss.dtsi \
  arch/arm/boot/dts/msm8226-mdss-panels.dtsi \
  arch/arm/boot/dts/dsi-panel-hx8394a-720p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-720p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35521-720p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35596-1080p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-720p-cmd.dtsi \
  arch/arm/boot/dts/dsi-panel-ssd2080m-720p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-jdi-1080p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-HX8379A-CMI-IPS-4p5-FWVGA-video-zte-400.dtsi \
  arch/arm/boot/dts/dsi-panel-HX8379A-HSD-TN-4p5-FWVGA-video-zte-401.dtsi \
  arch/arm/boot/dts/dsi-panel-HX8379A-TM-TM-4p5-FWVGA-video-zte-402.dtsi \
  arch/arm/boot/dts/dsi-panel-NT35517-BOE-BOE-4p5-QHD-video-zte-403.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-cmi-5p0-720p-cmd-zte-301.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-auo-5p0-720p-cmd-zte-303.dtsi \
  arch/arm/boot/dts/dsi-panel-otm1283a-tm-5p0-720p-video-zte-700.dtsi \
  arch/arm/boot/dts/dsi-panel-hx8394d-hsd-5p0-720p-video-zte-701.dtsi \
  arch/arm/boot/dts/dsi-panel-zte-hsd-nt35512-4p0-wvga-video.dtsi \
  arch/arm/boot/dts/dsi-panel-zte-cpt-fl108802-4p0-wvga-video.dtsi \
  arch/arm/boot/dts/msm8226-coresight.dtsi \
  arch/arm/boot/dts/msm8226-iommu-domains.dtsi \
  arch/arm/boot/dts/msm-rdbg.dtsi \
  arch/arm/boot/dts/msm-pm8226-rpm-regulator.dtsi \
  arch/arm/boot/dts/msm-pm8226.dtsi \
  arch/arm/boot/dts/msm8226-regulator.dtsi \
  arch/arm/boot/dts/msm8226-v1-pm.dtsi \
  arch/arm/boot/dts/msm8226-qrd.dtsi \
  arch/arm/boot/dts/msm8226-camera-sensor-qrd.dtsi \
  arch/arm/boot/dts/batterydata-qrd-4v35-2000mah.dtsi \

arch/arm/boot/msm8226-v1-qrd-evt.dtb: $(deps_arch/arm/boot/msm8226-v1-qrd-evt.dtb)

$(deps_arch/arm/boot/msm8226-v1-qrd-evt.dtb):
