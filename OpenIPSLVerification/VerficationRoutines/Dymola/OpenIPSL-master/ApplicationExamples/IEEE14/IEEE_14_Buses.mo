within IEEE14;
model IEEE_14_Buses
  import Modelica.Constants.pi;
  OpenIPSL.Electrical.Buses.Bus B1(
    V_b=69,
    V_0=1.06,
    angle_0=0) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={-135,-31})));
  OpenIPSL.Electrical.Buses.Bus B2(
    V_b=69,
    V_0=1.045,
    angle_0=-7.7738) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={-60,-128})));
  OpenIPSL.Electrical.Buses.Bus B3(
    V_b=69,
    V_0=1.01,
    angle_0=-19.0293) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={44,-122})));
  OpenIPSL.Electrical.Buses.Bus B4(
    V_b=69,
    V_0=0.99782,
    angle_0=-15.1497) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={32,-32})));
  OpenIPSL.Electrical.Buses.Bus B5(
    V_b=69,
    V_0=1.0029,
    angle_0=-13.0033) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={-24,-40})));
  OpenIPSL.Electrical.Buses.Bus B6(
    V_b=13.8,
    V_0=1.07,
    angle_0=-21.1744) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={-47,19})));
  OpenIPSL.Electrical.Buses.Bus B7(
    V_0=1.09,
    angle_0=-19.445,
    V_b=13.8) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={91,1})));
  OpenIPSL.Electrical.Buses.Bus B8(
    V_0=1.09,
    angle_0=-19.445,
    V_b=18) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=180,
        origin={149,-37})));
  OpenIPSL.Electrical.Buses.Bus B9(
    V_0=1.0129,
    angle_0=-21.7195,
    V_b=13.8) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={86,44})));
  OpenIPSL.Electrical.Buses.Bus B10(
    V_b=13.8,
    V_0=1.0122,
    angle_0=-22.0281) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={16,110})));
  OpenIPSL.Electrical.Buses.Bus B11(
    V_b=13.8,
    V_0=1.0357,
    angle_0=-21.7633) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={16,40})));
  OpenIPSL.Electrical.Buses.Bus B12(
    V_b=13.8,
    V_0=1.0462,
    angle_0=-22.3792) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={-128,68})));
  OpenIPSL.Electrical.Buses.Bus B13(
    V_b=13.8,
    V_0=1.0366,
    angle_0=-22.4297) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={-64,110})));
  OpenIPSL.Electrical.Buses.Bus B14(
    V_0=0.99695,
    angle_0=-23.5234,
    V_b=13.8) annotation (Placement(transformation(
        extent={{-15,-15},{15,15}},
        rotation=90,
        origin={104,108})));
  OpenIPSL.Electrical.Branches.PwLine L1(
    R=0.05695,
    X=0.17388,
    G=0,
    B=0.034/2) annotation (Placement(transformation(
        extent={{-8.99999,-5.99999},{8.99999,6.00002}},
        rotation=90,
        origin={-60,-77})));
  OpenIPSL.Electrical.Branches.PwLine L7(
    G=0,
    R=0.05403,
    X=0.22304,
    B=0.0492/2) annotation (Placement(transformation(
        extent={{-10,-6.99999},{10,6.99999}},
        rotation=0,
        origin={-84,-53})));
  OpenIPSL.Electrical.Branches.PwLine L3(
    G=0,
    R=0.01938,
    X=0.05917,
    B=0.0528/2) annotation (Placement(transformation(
        extent={{-10,-6.99995},{10,6.99998}},
        rotation=270,
        origin={-135,-96})));
  OpenIPSL.Electrical.Branches.PwLine L6(
    G=0,
    R=0.06701,
    X=0.17103,
    B=0.0346/2) annotation (Placement(transformation(
        extent={{-8.99998,-6},{8.99999,5.99996}},
        rotation=90,
        origin={44,-65})));
  OpenIPSL.Electrical.Branches.PwLine L8(
    G=0,
    R=0.01335,
    X=0.04211,
    B=0.0128/2) annotation (Placement(transformation(
        extent={{-10,-6.99999},{10,6.99999}},
        rotation=0,
        origin={2,-53})));
  OpenIPSL.Electrical.Branches.PwLine L13(
    G=0,
    R=0.09498,
    X=0.1989,
    B=0) annotation (Placement(transformation(
        extent={{-10,-6.00002},{10,6.00001}},
        rotation=0,
        origin={-2,26})));
  OpenIPSL.Electrical.Branches.PwLine L10(
    G=0,
    R=0.12291,
    X=0.25581,
    B=0) annotation (Placement(transformation(
        extent={{-8.99999,-6},{9.00002,5.99999}},
        rotation=90,
        origin={-128,47})));
  OpenIPSL.Electrical.Branches.PwLine L12(
    G=0,
    R=0.06615,
    X=0.13027,
    B=0) annotation (Placement(transformation(
        extent={{-9.00001,-6.00001},{9.00001,6.00001}},
        rotation=90,
        origin={-64,63})));
  OpenIPSL.Electrical.Branches.PwLine L14(
    G=0,
    B=0,
    R=0.08205,
    X=0.19207) annotation (Placement(transformation(
        extent={{-8.5,-6},{8.5,6}},
        rotation=90,
        origin={16,66.5})));
  OpenIPSL.Electrical.Branches.PwLine L15(
    G=0,
    B=0,
    R=0.03181,
    X=0.0845) annotation (Placement(transformation(
        extent={{-8.99999,-6},{8.99999,5.99998}},
        rotation=90,
        origin={52,69})));
  OpenIPSL.Electrical.Branches.PwLine L16(
    G=0,
    B=0,
    R=0.12711,
    X=0.27038) annotation (Placement(transformation(
        extent={{-9.5,-6.0002},{9.49997,6.00018}},
        rotation=90,
        origin={104,75.5})));
  OpenIPSL.Electrical.Branches.PwLine L17(
    G=0,
    B=0,
    R=0.17093,
    X=0.34802) annotation (Placement(transformation(
        extent={{-9.5,-6.00021},{9.5,6.00022}},
        rotation=180,
        origin={44.5,97.9998})));
  OpenIPSL.Electrical.Branches.PwLine L2(
    G=0,
    B=0,
    R=0,
    X=0.11001) annotation (Placement(transformation(
        extent={{-9.5,-6.50002},{9.5,6.50002}},
        rotation=90,
        origin={91.5,19.5})));
  OpenIPSL.Electrical.Branches.PwLine L5(
    G=0,
    R=0.04699,
    X=0.19797,
    B=0.0438/2) annotation (Placement(transformation(
        extent={{-8.99998,-5.99999},{8.99998,5.99999}},
        rotation=180,
        origin={13,-108})));
  OpenIPSL.Electrical.Branches.PwLine L11(
    G=0,
    B=0,
    R=0.22092,
    X=0.19988) annotation (Placement(transformation(
        extent={{-8.99999,-5.99999},{8.99999,5.99999}},
        rotation=90,
        origin={-88,79})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ2(
    V_b=69,
    V_0=1.002918521543744,
    angle_0=-0.226950235044097*180/pi,
    P_0=10.64,
    Q_0=2.24) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={-41,-15})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ3(
    V_0=1.045,
    V_b=69,
    angle_0=-0.135677901384789*180/pi,
    P_0=30.38,
    Q_0=17.78) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={-28,-118})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ12(
    V_0=1.01,
    V_b=69,
    angle_0=-0.332124297307116*180/pi,
    P_0=131.88,
    Q_0=26.6) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={71,-101})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ9(
    V_b=13.8,
    V_0=1.012902425305420,
    angle_0=-0.379076293864958*180/pi,
    P_0=41.3,
    Q_0=23.24) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={138,62})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ6(
    V_b=13.8,
    V_0=0.996954035152595,
    angle_0=-0.410560994783471*180/pi,
    P_0=20.86,
    Q_0=7) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={104,132})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ8(
    V_b=13.8,
    V_0=1.012187694288416,
    angle_0=-0.384463531221707*180/pi,
    P_0=12.6,
    Q_0=8.12) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={17,131})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ11(
    V_b=13.8,
    V_0=1.036593776863207,
    angle_0=-0.391472739421350*180/pi,
    P_0=18.9,
    Q_0=8.12) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={-62,132})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ7(
    V_b=13.8,
    V_0=1.046151564164931,
    angle_0=-0.390590184761168*180/pi,
    P_0=8.54,
    Q_0=2.24) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={-143,99})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ10(
    V_b=13.8,
    V_0=1.035651856727375,
    angle_0=-0.379841137315380*180/pi,
    P_0=4.9,
    Q_0=2.52) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=90,
        origin={38,50})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ4(
    V_0=1.07,
    V_b=13.8,
    angle_0=-0.369562610674900*180/pi,
    P_0=15.68,
    Q_0=10.5) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={-39,73})));
  OpenIPSL.Electrical.Loads.PSAT.VoltDependant lPQ5(
    V_b=69,
    V_0=0.997818344821605,
    angle_0=-0.264411509112327*180/pi,
    P_0=66.92,
    Q_0=5.6) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={7,-11})));
  OpenIPSL.Electrical.Branches.PSAT.TwoWindingTransformer twoWindingTransformer(
    V_b=18,
    Vn=18,
    rT=0,
    xT=0.17615) annotation (Placement(transformation(
        extent={{-14,-14},{14,14}},
        rotation=180,
        origin={119,-38})));
  OpenIPSL.Electrical.Branches.PSAT.TwoWindingTransformer tWTransformerWithFixedTapRatio(
    m=0.932,
    V_b=69,
    Vn=69,
    rT=0,
    xT=0.25202) annotation (Placement(transformation(
        extent={{-14,-14},{14,14}},
        rotation=90,
        origin={-18,-6})));
  OpenIPSL.Electrical.Branches.PSAT.TwoWindingTransformer tWTransformerWithFixedTapRatio1(
    m=0.969,
    V_b=69,
    Vn=69,
    rT=0,
    xT=0.55618) annotation (Placement(transformation(
        extent={{-14,-14},{14,14}},
        rotation=90,
        origin={44,16})));
  OpenIPSL.Electrical.Branches.PSAT.TwoWindingTransformer tWTransformerWithFixedTapRatio2(
    m=0.978,
    V_b=69,
    Vn=69,
    rT=0,
    xT=0.20912) annotation (Placement(transformation(
        extent={{-14,-14},{14,14}},
        rotation=0,
        origin={64,-18})));
  IEEE14.Generation_Groups.GroupBus2 groupBus2_1(
    V_b=69,
    V_0=1.045,
    P_0=0.400000000000003*SysData.S_b,
    Q_0=0.948601533828267*SysData.S_b,
    angle_0=-0.135677901384789*180/pi)
    annotation (Placement(transformation(extent={{-84,-160},{-64,-140}})));
  IEEE14.Generation_Groups.GroupBus3 groupBus3_1(
    V_b=69,
    V_0=1.01,
    P_0=0.000000000000001*SysData.S_b,
    Q_0=0.597360399382514*SysData.S_b,
    angle_0=-0.332124297307116*180/pi)
    annotation (Placement(transformation(extent={{12,-162},{34,-142}})));
  IEEE14.Generation_Groups.GroupBus6 groupBus6_1(
    V_b=13.8,
    V_0=1.07,
    P_0=0.000000000000039*SysData.S_b,
    angle_0=-0.378890344088088*180/pi,
    Q_0=0.444329439389711*SysData.S_b)
    annotation (Placement(transformation(extent={{-96,-10},{-76,10}})));
  IEEE14.Generation_Groups.GroupBus8 groupBus8_1(
    V_b=18,
    V_0=1.09,
    P_0=-0.000000000000000*SysData.S_b,
    Q_0=0.334022011934611*SysData.S_b,
    angle_0=-19.445) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={172,-36})));
  OpenIPSL.Electrical.Branches.PwLine pwLinewithOpeningSending(
    R=0.05811,
    X=0.17632,
    G=0,
    B=0.0374/2,
    t2=25,
    t1=20,
    opening=2)
    annotation (Placement(transformation(extent={{-2,-82},{16,-69}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=100, fn=60)
    annotation (Placement(transformation(extent={{-194,126},{-128,154}})));
  OpenIPSL.Electrical.Events.PwFault pwFault2(
    X=1e-5,
    t1=1,
    R=0,
    t2=1.2) annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=270,
        origin={73,-51})));
  Generation_Groups.GroupBus1 groupBus1_1(
    V_b=69,
    V_0=1.06,
    P_0=3.520304175896794*SysData.S_b,
    Q_0=-0.281968127428245*SysData.S_b)
    annotation (Placement(transformation(extent={{-178,-16},{-158,4}})));
equation
  connect(B12.p, L11.p) annotation (Line(
      points={{-128,68},{-128,62},{-88,62},{-88,70.9}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(L10.p, B6.p) annotation (Line(
      points={{-128,38.9},{-128,28},{-47,28},{-47,19}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B3.p, L6.p) annotation (Line(
      points={{44,-122},{44,-98},{44,-73.1},{44,-73.1}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B1.p, L3.p) annotation (Line(
      points={{-135,-31},{-135,-60},{-135,-87},{-135,-87}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B4.p, L6.n) annotation (Line(
      points={{32,-32},{32,-42},{44,-42},{44,-56.9}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B4.p, L8.n) annotation (Line(
      points={{32,-32},{32,-42},{18,-42},{18,-53},{11,-53}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B5.p, lPQ2.p) annotation (Line(
      points={{-24,-40},{-24,-21},{-41,-21}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(lPQ5.p, B4.p) annotation (Line(
      points={{7,-17},{7,-24},{32,-24},{32,-32}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(lPQ11.p, B13.p) annotation (Line(
      points={{-62,126},{-62,118},{-64,118},{-64,110}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B10.p, L15.n) annotation (Line(
      points={{16,110},{16,84},{52,84},{52,77.1}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B10.p, L14.n) annotation (Line(
      points={{16,110},{16,74.15}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B13.p, L12.n) annotation (Line(
      points={{-64,110},{-64,71.1}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(L16.n, B14.p) annotation (Line(points={{104,84.05},{104,88.05},{104,108}},
                 color={0,0,255}));
  connect(B9.p, lPQ9.p) annotation (Line(points={{86,44},{86,44},{86,50},{138,
          50},{138,56}}, color={0,0,255}));
  connect(B11.p, lPQ10.p) annotation (Line(points={{16,40},{16,40},{16,50},{32,
          50}}, color={0,0,255}));
  connect(B11.p, L14.p)
    annotation (Line(points={{16,40},{16,58.85}}, color={0,0,255}));
  connect(lPQ4.p, B6.p) annotation (Line(points={{-39,67},{-39,44.75},{-47,
          44.75},{-47,19}}, color={0,0,255}));
  connect(B6.p, L12.p) annotation (Line(points={{-47,19},{-47,40.5},{-64,40.5},
          {-64,54.9}}, color={0,0,255}));
  connect(lPQ7.p, B12.p) annotation (Line(points={{-143,93},{-143,82},{-128,82},
          {-128,68}}, color={0,0,255}));
  connect(B13.p, L11.n) annotation (Line(points={{-64,110},{-64,98},{-88,98},{-88,
          87.1}}, color={0,0,255}));
  connect(L10.n, B12.p) annotation (Line(points={{-128,55.1},{-128,55.1},{-128,68}},
        color={0,0,255}));
  connect(B3.p, lPQ12.p) annotation (Line(points={{44,-122},{44,-122},{44,-106},
          {44,-107},{71,-107}}, color={0,0,255}));
  connect(B3.p, L5.p) annotation (Line(points={{44,-122},{44,-108},{21.1,-108}},
        color={0,0,255}));
  connect(B7.p, L2.p) annotation (Line(points={{91,1},{91,9.5},{91.5,9.5},{91.5,
          10.95}}, color={0,0,255}));
  connect(B9.p, L2.n) annotation (Line(points={{86,44},{91.5,44},{91.5,28.05}},
        color={0,0,255}));
  connect(B2.p, lPQ3.p) annotation (Line(points={{-60,-128},{-60,-124},{-28,-124}},
        color={0,0,255}));
  connect(B2.p, L1.p) annotation (Line(points={{-60,-128},{-60,-85.1},{-60,-85.1}},
        color={0,0,255}));
  connect(L1.n, B5.p) annotation (Line(points={{-60,-68.9},{-60,-59.8},{-24,-59.8},{-24,-40}},
                      color={0,0,255}));
  connect(B1.p, L7.p) annotation (Line(points={{-135,-31},{-135,-53},{-93,-53}},
        color={0,0,255}));
  connect(B5.p, L7.n)
    annotation (Line(points={{-24,-40},{-24,-53},{-75,-53}}, color={0,0,255}));
  connect(B7.p, twoWindingTransformer.n)
    annotation (Line(points={{91,1},{91,-38},{103.6,-38}}, color={0,0,255}));
  connect(twoWindingTransformer.p, B8.p) annotation (Line(points={{134.4,-38},{
          149,-38},{149,-37}}, color={0,0,255}));
  connect(B4.p, tWTransformerWithFixedTapRatio1.p) annotation (Line(points={{32,
          -32},{32,-32},{32,-4},{32,0.6},{44,0.6}}, color={0,0,255}));
  connect(B5.p, tWTransformerWithFixedTapRatio.p) annotation (Line(points={{-24,
          -40},{-22,-40},{-22,-21.4},{-18,-21.4}}, color={0,0,255}));
  connect(B6.p, tWTransformerWithFixedTapRatio.n) annotation (Line(points={{-47,
          19},{-47,12},{-18,12},{-18,9.4}}, color={0,0,255}));
  connect(groupBus2_1.pwPin, B2.p) annotation (Line(points={{-63,-150},{-60,-150},
          {-60,-128}}, color={0,0,255}));
  connect(groupBus3_1.pwPin, B3.p) annotation (Line(points={{35,-152.2},{44,-152.2},
          {44,-122}}, color={0,0,255}));
  connect(groupBus6_1.pwPin, B6.p)
    annotation (Line(points={{-75,0},{-47,0},{-47,19}}, color={0,0,255}));
  connect(B4.p, tWTransformerWithFixedTapRatio2.p) annotation (Line(points={{32,
          -32},{36,-32},{36,-18},{48.6,-18}}, color={0,0,255}));
  connect(B7.p, tWTransformerWithFixedTapRatio2.n) annotation (Line(points={{91,
          1},{91,-8.5},{79.4,-8.5},{79.4,-18}}, color={0,0,255}));
  connect(B9.p, tWTransformerWithFixedTapRatio1.n) annotation (Line(points={{86,
          44},{86,44},{86,36},{86,34},{44,34},{44,31.4}}, color={0,0,255}));
  connect(B6.p, L13.p) annotation (Line(points={{-47,19},{-47,28},{-14,28},{-14,
          26},{-11,26}}, color={0,0,255}));
  connect(L13.n, B11.p)
    annotation (Line(points={{7,26},{16,26},{16,40}}, color={0,0,255}));
  connect(B5.p, L8.p) annotation (Line(points={{-24,-40},{-24,-40},{-14,-40},{-14,
          -53},{-7,-53}}, color={0,0,255}));
  connect(B8.p, groupBus8_1.pwPin) annotation (Line(points={{149,-37},{159.5,-37},
          {159.5,-36.2},{160.8,-36.2}}, color={0,0,255}));
  connect(L15.p, B9.p)
    annotation (Line(points={{52,60.9},{86,60.9},{86,44}}, color={0,0,255}));
  connect(B9.p, L16.p) annotation (Line(points={{86,44},{86,44},{86,56},{96,56},{104,56},{104,66.95}},
                                 color={0,0,255}));
  connect(B14.p, L17.p) annotation (Line(points={{104,108},{104,118},{74,118},{
          74,97.9998},{53.05,97.9998}}, color={0,0,255}));
  connect(B13.p, L17.n) annotation (Line(points={{-64,110},{-64,97.9998},{35.95,
          97.9998}}, color={0,0,255}));
  connect(lPQ8.p, B10.p) annotation (Line(points={{17,125},{17,114.65},{16,
          114.65},{16,110}}, color={0,0,255}));
  connect(lPQ6.p, L17.p) annotation (Line(points={{104,126},{104,118},{74,118},
          {74,97.9998},{53.05,97.9998}}, color={0,0,255}));
  connect(B2.p, pwLinewithOpeningSending.p) annotation (Line(points={{-60,-128},
          {-60,-128},{-60,-100},{-60,-106},{-14,-106},{-14,-76},{-1.1,-76},{-1.1,
          -75.5}}, color={0,0,255}));
  connect(B4.p, pwLinewithOpeningSending.n) annotation (Line(points={{32,-32},{
          32,-32},{32,-76},{15.1,-76},{15.1,-75.5}}, color={0,0,255}));
  connect(L5.n, B2.p) annotation (Line(points={{4.90002,-108},{-6,-108},{-6,-134},
          {-60,-134},{-60,-128}}, color={0,0,255}));
  connect(L3.n, B2.p) annotation (Line(points={{-135,-105},{-135,-134},{-60,-134},{-60,-128}},
                       color={0,0,255}));
  connect(groupBus1_1.pwPin, B1.p) annotation (Line(points={{-157,-6.2},{-135,-6.2},
          {-135,-31}}, color={0,0,255}));
  connect(B4.p, pwFault2.p) annotation (Line(points={{32,-32},{32,-28},{73,-28},{73,-42.8333}},
                          color={0,0,255}));
  annotation (
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-200,-180},{
            200,160}})),
    Icon(coordinateSystem(extent={{-200,-180},{200,160}})),
    Documentation(info="<html>
<table cellspacing=\"1\" cellpadding=\"1\" border=\"1\">
<tr>
<td><p>Reference</p></td>
<td>PSAT Manual 2.1.8</td>
</tr>
<tr>
<td><p>Last update</p></td>
<td>13/07/2015</td>
</tr>
<tr>
<td><p>Author</p></td>
<td><p>MAA Murad,SmarTS Lab, KTH Royal Institute of Technology</p></td>
</tr>
<tr>
<td><p>Contact</p></td>
<td><p><a href=\"mailto:luigiv@kth.se\">luigiv@kth.se</a></p></td>
</tr>
</table>
<p><br><span style=\"font-family: MS Shell Dlg 2;\">&LT;OpenIPSL: iTesla Power System Library&GT;</span></p>
<p><span style=\"font-family: MS Shell Dlg 2;\">Copyright 2015 RTE (France), AIA (Spain), KTH (Sweden) and DTU (Denmark)</span></p>
<ul>
<li><span style=\"font-family: MS Shell Dlg 2;\">RTE: http://www.rte-france.com/ </span></li>
<li><span style=\"font-family: MS Shell Dlg 2;\">AIA: http://www.aia.es/en/energy/</span></li>
<li><span style=\"font-family: MS Shell Dlg 2;\">KTH: https://www.kth.se/en</span></li>
<li><span style=\"font-family: MS Shell Dlg 2;\">DTU:http://www.dtu.dk/english</span></li>
</ul>
<p><span style=\"font-family: MS Shell Dlg 2;\">The authors can be contacted by email: info at itesla-ipsl dot org</span></p>
<p><span style=\"font-family: MS Shell Dlg 2;\">This package is part of the iTesla Power System Library (&QUOT;OpenIPSL&QUOT;) .</span></p>
<p><span style=\"font-family: MS Shell Dlg 2;\">The OpenIPSL is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.</span></p>
<p><span style=\"font-family: MS Shell Dlg 2;\">The OpenIPSL is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.</span></p>
<p><span style=\"font-family: MS Shell Dlg 2;\">You should have received a copy of the GNU Lesser General Public License along with the OpenIPSL. If not, see &LT;http://www.gnu.org/licenses/&GT;.</span></p>
</html>"),
    experiment(
      StopTime=10,
      Interval=0.001,
      Tolerance=1e-006,
      __Dymola_fixedstepsize=0.001,
      __Dymola_Algorithm="Rkfix2"));
end IEEE_14_Buses;
