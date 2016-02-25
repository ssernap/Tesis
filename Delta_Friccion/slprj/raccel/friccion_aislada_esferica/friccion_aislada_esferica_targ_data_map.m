  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 26;
      section.data(26)  = dumData; %prealloc
      
	  ;% rtP.Gain_Gain
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Gain_Gain_j13fe42xcx
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.ProportionalGain_Gain
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Integrator_IC
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.DerivativeGain_Gain
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Filter_IC
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.FilterCoefficient_Gain
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Saturation_UpperSat
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Saturation_LowerSat
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.ProportionalGain_Gain_opm0dtoc1v
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.Integrator_IC_efr3g1wrer
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.DerivativeGain_Gain_pfs2epusuf
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Filter_IC_gdoix51u4z
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.FilterCoefficient_Gain_ediatr1iqq
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.Saturation_UpperSat_e2lmnhs4sw
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.Saturation_LowerSat_b5ltm0ubpa
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.ProportionalGain_Gain_o1sqswnaqc
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.Integrator_IC_cvaudhvmvm
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.DerivativeGain_Gain_hru04pbg0s
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.Filter_IC_ajlfi3u02h
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.FilterCoefficient_Gain_hiknh0un1z
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.Saturation_UpperSat_mneiexavww
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.Saturation_LowerSat_bhtm255dky
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtP.IntegralGain_Gain
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtP.IntegralGain_Gain_cjxryeebdo
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtP.IntegralGain_Gain_c2fz3dj4be
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 38;
      section.data(38)  = dumData; %prealloc
      
	  ;% rtB.al3p3wiuhl
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.aptbtwirg2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.jrnsoabm5v
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.iuntmk0pqm
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.b2kmtindra
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.hq20auavrt
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.b1nojvudsr
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.f1mgl1s1xb
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.dvhl00qx2u
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.oawkdb23jw
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.mvfxom43g2
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.gepgtl2di2
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.glyfzrufqc
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.hay0z4ydom
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.l2jfs00ccy
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 27;
	
	  ;% rtB.crsv2a03b0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 33;
	
	  ;% rtB.mopdhxqse4
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 37;
	
	  ;% rtB.kcfetpaoaj
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 41;
	
	  ;% rtB.jky4z1enk0
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 45;
	
	  ;% rtB.lbr4oxwevp
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 49;
	
	  ;% rtB.cwm3tftnlg
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 53;
	
	  ;% rtB.pjx0kmxjmu
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 57;
	
	  ;% rtB.ioszdbstmn
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 58;
	
	  ;% rtB.od0udch0bu
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 62;
	
	  ;% rtB.euf53gdk1f
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 63;
	
	  ;% rtB.jpvxooq51q
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 67;
	
	  ;% rtB.itv2k1nlsr
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 68;
	
	  ;% rtB.od0xpltfi4
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 72;
	
	  ;% rtB.khdrz5d30a
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 76;
	
	  ;% rtB.ipafxshnxq
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 80;
	
	  ;% rtB.mken4d3mf5
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 84;
	
	  ;% rtB.cl1j1vhnfj
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 88;
	
	  ;% rtB.p5kqpkokgo
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 92;
	
	  ;% rtB.pljjj452mj
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 96;
	
	  ;% rtB.iczpsbisae
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 97;
	
	  ;% rtB.o4nsjknro4
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 98;
	
	  ;% rtB.osjgev2jfz
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 99;
	
	  ;% rtB.iier5jnm1g
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 100;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.g0ybx5ny0s
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.citycn5tuj
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.mxwpzq1ids
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.hofd5gl0lv
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.lqg4ib442l
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.kmxvynb5xg
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 95;
      section.data(95)  = dumData; %prealloc
      
	  ;% rtDW.b4ags411aw.LoggedData
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.bp22cutfje.LoggedData
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.etebikasf0.LoggedData
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nxlxutql3x.LoggedData
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.b4ibq4fiew.LoggedData
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.oh2nksyqvj
	  section.data(6).logicalSrcIdx = 11;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.piiowhvoq3
	  section.data(7).logicalSrcIdx = 12;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.n0nnoz5d3k
	  section.data(8).logicalSrcIdx = 13;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.d3mtquumef
	  section.data(9).logicalSrcIdx = 14;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.ojbdkm3g3k
	  section.data(10).logicalSrcIdx = 15;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.m5lvlhykau
	  section.data(11).logicalSrcIdx = 16;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.i4aru4d13y
	  section.data(12).logicalSrcIdx = 17;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.psaiktqsay
	  section.data(13).logicalSrcIdx = 18;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.bf0cesukef
	  section.data(14).logicalSrcIdx = 19;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.hsfvbv5cr3
	  section.data(15).logicalSrcIdx = 20;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.kswjmadgur
	  section.data(16).logicalSrcIdx = 21;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.jstvsrdxec
	  section.data(17).logicalSrcIdx = 22;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.bwrk1jrfjh
	  section.data(18).logicalSrcIdx = 23;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.far445l3om
	  section.data(19).logicalSrcIdx = 24;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.jama3hkqjv
	  section.data(20).logicalSrcIdx = 25;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.gtt25diae4
	  section.data(21).logicalSrcIdx = 26;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.bzrmjhnabu
	  section.data(22).logicalSrcIdx = 27;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.is3dc1o4zz
	  section.data(23).logicalSrcIdx = 28;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.nwimzqy5ar
	  section.data(24).logicalSrcIdx = 29;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.nb1qo1noy1
	  section.data(25).logicalSrcIdx = 30;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.jjazmhpwwr
	  section.data(26).logicalSrcIdx = 31;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.evijjolyva
	  section.data(27).logicalSrcIdx = 32;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.pxp5ilgmi3
	  section.data(28).logicalSrcIdx = 33;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.jezkree5dg
	  section.data(29).logicalSrcIdx = 34;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.bkak5fqmq4
	  section.data(30).logicalSrcIdx = 35;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.dxh0qu5kpi
	  section.data(31).logicalSrcIdx = 36;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.gsrotkxe3w
	  section.data(32).logicalSrcIdx = 37;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.aa1kkeyuws
	  section.data(33).logicalSrcIdx = 38;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.lsvhhiyuzl
	  section.data(34).logicalSrcIdx = 39;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.gnkz3gjw5b
	  section.data(35).logicalSrcIdx = 40;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.flmlbqbmbh
	  section.data(36).logicalSrcIdx = 41;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.gkm0s0ctrk
	  section.data(37).logicalSrcIdx = 42;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.iob4nznmac
	  section.data(38).logicalSrcIdx = 43;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.gcanzh043u
	  section.data(39).logicalSrcIdx = 44;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.phud5qd132
	  section.data(40).logicalSrcIdx = 45;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.ahd5nxo5ee
	  section.data(41).logicalSrcIdx = 46;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.hwdzla2kb2
	  section.data(42).logicalSrcIdx = 47;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.l25nib43el
	  section.data(43).logicalSrcIdx = 48;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.ptzwk443bp
	  section.data(44).logicalSrcIdx = 49;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.gn4pfafhsz
	  section.data(45).logicalSrcIdx = 50;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.de0spn04mt
	  section.data(46).logicalSrcIdx = 51;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.gftgep1sjl
	  section.data(47).logicalSrcIdx = 52;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.c2oj5ebuij
	  section.data(48).logicalSrcIdx = 53;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtDW.f5q1bnr2od
	  section.data(49).logicalSrcIdx = 54;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtDW.lpvwxxwypj
	  section.data(50).logicalSrcIdx = 55;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtDW.gpf31qpv5x
	  section.data(51).logicalSrcIdx = 56;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtDW.jrmucmc5l0
	  section.data(52).logicalSrcIdx = 57;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtDW.eow2enys5v
	  section.data(53).logicalSrcIdx = 58;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtDW.cb0yve1pxy
	  section.data(54).logicalSrcIdx = 59;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtDW.bz2upk2eq4
	  section.data(55).logicalSrcIdx = 60;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtDW.mu0wco4dhv
	  section.data(56).logicalSrcIdx = 61;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtDW.mw4azdjt0i
	  section.data(57).logicalSrcIdx = 62;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtDW.hpobr5dnto
	  section.data(58).logicalSrcIdx = 63;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtDW.cayqsmxyey
	  section.data(59).logicalSrcIdx = 64;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtDW.b4ylysn521
	  section.data(60).logicalSrcIdx = 65;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtDW.j5smstjan3
	  section.data(61).logicalSrcIdx = 66;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtDW.dntzyn5tmg
	  section.data(62).logicalSrcIdx = 67;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtDW.pinay1nrr3
	  section.data(63).logicalSrcIdx = 68;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtDW.aek3fotj4l
	  section.data(64).logicalSrcIdx = 69;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtDW.ofysl11eyg
	  section.data(65).logicalSrcIdx = 70;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtDW.nviurbkyfu
	  section.data(66).logicalSrcIdx = 71;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtDW.gksf2y3xqu
	  section.data(67).logicalSrcIdx = 72;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtDW.nyzomkvmej
	  section.data(68).logicalSrcIdx = 73;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtDW.ast1vf5n54
	  section.data(69).logicalSrcIdx = 74;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtDW.jionimgfgx
	  section.data(70).logicalSrcIdx = 75;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtDW.ndnwrahj5v
	  section.data(71).logicalSrcIdx = 76;
	  section.data(71).dtTransOffset = 70;
	
	  ;% rtDW.o50nrjnd44
	  section.data(72).logicalSrcIdx = 77;
	  section.data(72).dtTransOffset = 71;
	
	  ;% rtDW.j4zuphpirj
	  section.data(73).logicalSrcIdx = 78;
	  section.data(73).dtTransOffset = 72;
	
	  ;% rtDW.hcsxuwehmb
	  section.data(74).logicalSrcIdx = 79;
	  section.data(74).dtTransOffset = 73;
	
	  ;% rtDW.bm2gxumckz
	  section.data(75).logicalSrcIdx = 80;
	  section.data(75).dtTransOffset = 74;
	
	  ;% rtDW.jxk3l5lam0
	  section.data(76).logicalSrcIdx = 81;
	  section.data(76).dtTransOffset = 75;
	
	  ;% rtDW.atpqvqjfs5
	  section.data(77).logicalSrcIdx = 82;
	  section.data(77).dtTransOffset = 76;
	
	  ;% rtDW.ac2uu54gd3
	  section.data(78).logicalSrcIdx = 83;
	  section.data(78).dtTransOffset = 77;
	
	  ;% rtDW.mw5olxwdvr
	  section.data(79).logicalSrcIdx = 84;
	  section.data(79).dtTransOffset = 78;
	
	  ;% rtDW.bslfr4ae1c
	  section.data(80).logicalSrcIdx = 85;
	  section.data(80).dtTransOffset = 79;
	
	  ;% rtDW.nyiiqtb3pj
	  section.data(81).logicalSrcIdx = 86;
	  section.data(81).dtTransOffset = 80;
	
	  ;% rtDW.gcums0dzz2
	  section.data(82).logicalSrcIdx = 87;
	  section.data(82).dtTransOffset = 81;
	
	  ;% rtDW.lhf2yly352
	  section.data(83).logicalSrcIdx = 88;
	  section.data(83).dtTransOffset = 82;
	
	  ;% rtDW.aabtyyllyb
	  section.data(84).logicalSrcIdx = 89;
	  section.data(84).dtTransOffset = 83;
	
	  ;% rtDW.g03azz2emd
	  section.data(85).logicalSrcIdx = 90;
	  section.data(85).dtTransOffset = 84;
	
	  ;% rtDW.ku2cbhbb3u
	  section.data(86).logicalSrcIdx = 91;
	  section.data(86).dtTransOffset = 85;
	
	  ;% rtDW.f4ygo2hyze
	  section.data(87).logicalSrcIdx = 92;
	  section.data(87).dtTransOffset = 86;
	
	  ;% rtDW.g3mxxyfx5h
	  section.data(88).logicalSrcIdx = 93;
	  section.data(88).dtTransOffset = 87;
	
	  ;% rtDW.mdbfuljwns
	  section.data(89).logicalSrcIdx = 94;
	  section.data(89).dtTransOffset = 88;
	
	  ;% rtDW.ha0jipw4xl
	  section.data(90).logicalSrcIdx = 95;
	  section.data(90).dtTransOffset = 89;
	
	  ;% rtDW.avoetnry4f
	  section.data(91).logicalSrcIdx = 96;
	  section.data(91).dtTransOffset = 90;
	
	  ;% rtDW.j3w0jjg10i
	  section.data(92).logicalSrcIdx = 97;
	  section.data(92).dtTransOffset = 91;
	
	  ;% rtDW.nzmye2eqv0
	  section.data(93).logicalSrcIdx = 98;
	  section.data(93).dtTransOffset = 92;
	
	  ;% rtDW.azmsy2zntv
	  section.data(94).logicalSrcIdx = 99;
	  section.data(94).dtTransOffset = 93;
	
	  ;% rtDW.bnqfvsepi0
	  section.data(95).logicalSrcIdx = 100;
	  section.data(95).dtTransOffset = 94;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.nvlp11rn3a
	  section.data(1).logicalSrcIdx = 101;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nusy4aj0zr
	  section.data(2).logicalSrcIdx = 102;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.i33y5j4e2i
	  section.data(3).logicalSrcIdx = 103;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1536412683;
  targMap.checksum1 = 1853398603;
  targMap.checksum2 = 262656827;
  targMap.checksum3 = 4265661439;

