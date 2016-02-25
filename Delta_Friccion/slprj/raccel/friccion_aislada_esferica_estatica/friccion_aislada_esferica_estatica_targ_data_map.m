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
      section.nData     = 29;
      section.data(29)  = dumData; %prealloc
      
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
	
	  ;% rtP.BUILTIN_RateTransition_17_X0
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtP.BUILTIN_RateTransition_21_X0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtP.BUILTIN_RateTransition_19_X0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
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
      section.nData     = 48;
      section.data(48)  = dumData; %prealloc
      
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
	
	  ;% rtB.lqlbnkdbfc
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 27;
	
	  ;% rtB.ppwjb2mgez
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 28;
	
	  ;% rtB.b1apntsclq
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 29;
	
	  ;% rtB.guyeh3e3kz
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 30;
	
	  ;% rtB.n1oykolxud
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 34;
	
	  ;% rtB.bc1ywsncjv
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 37;
	
	  ;% rtB.nx50lbvr12
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 38;
	
	  ;% rtB.jjfsxd2pht
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 42;
	
	  ;% rtB.fiqjxgaeqv
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 45;
	
	  ;% rtB.jjklppy5k2
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 46;
	
	  ;% rtB.jrta0gtdwd
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 50;
	
	  ;% rtB.jky4z1enk0
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 53;
	
	  ;% rtB.lbr4oxwevp
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 57;
	
	  ;% rtB.cwm3tftnlg
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 61;
	
	  ;% rtB.d5wdh45q4j
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 65;
	
	  ;% rtB.itv2k1nlsr
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 66;
	
	  ;% rtB.baafwnqhzg
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 70;
	
	  ;% rtB.mopdhxqse4
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 71;
	
	  ;% rtB.gmk2mqmnrv
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 75;
	
	  ;% rtB.kcfetpaoaj
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 76;
	
	  ;% rtB.jpvxooq51q
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 80;
	
	  ;% rtB.pjx0kmxjmu
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 81;
	
	  ;% rtB.od0udch0bu
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 82;
	
	  ;% rtB.od0xpltfi4
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 83;
	
	  ;% rtB.khdrz5d30a
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 87;
	
	  ;% rtB.ipafxshnxq
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 91;
	
	  ;% rtB.mken4d3mf5
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 95;
	
	  ;% rtB.cl1j1vhnfj
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 99;
	
	  ;% rtB.p5kqpkokgo
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 103;
	
	  ;% rtB.pljjj452mj
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 107;
	
	  ;% rtB.iczpsbisae
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 108;
	
	  ;% rtB.o4nsjknro4
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 109;
	
	  ;% rtB.osjgev2jfz
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 110;
	
	  ;% rtB.iier5jnm1g
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 111;
	
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
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtDW.cgfm5yu3vf
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.oqhtism5uc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.npo5cpgitx
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.oyqemtyfbv
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.kuxoufoxlv
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.emwh4pijl3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.kmxvynb5xg
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.citycn5tuj
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.mxwpzq1ids
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.juy1cxpanf
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.hartzycbqu
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.f3jo3fugre
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 97;
      section.data(97)  = dumData; %prealloc
      
	  ;% rtDW.b4ags411aw.LoggedData
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.bp22cutfje.LoggedData
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.etebikasf0.LoggedData
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nxlxutql3x.LoggedData
	  section.data(4).logicalSrcIdx = 15;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.b4ibq4fiew.LoggedData
	  section.data(5).logicalSrcIdx = 16;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.oh2nksyqvj
	  section.data(6).logicalSrcIdx = 17;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.piiowhvoq3
	  section.data(7).logicalSrcIdx = 18;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.n0nnoz5d3k
	  section.data(8).logicalSrcIdx = 19;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.d3mtquumef
	  section.data(9).logicalSrcIdx = 20;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.ojbdkm3g3k
	  section.data(10).logicalSrcIdx = 21;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.m5lvlhykau
	  section.data(11).logicalSrcIdx = 22;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.i4aru4d13y
	  section.data(12).logicalSrcIdx = 23;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.psaiktqsay
	  section.data(13).logicalSrcIdx = 24;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.bf0cesukef
	  section.data(14).logicalSrcIdx = 25;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.hsfvbv5cr3
	  section.data(15).logicalSrcIdx = 26;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.bphabyrdhs.LoggedData
	  section.data(16).logicalSrcIdx = 27;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.p4qala5dxx.LoggedData
	  section.data(17).logicalSrcIdx = 28;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.knt2jcevxn
	  section.data(18).logicalSrcIdx = 29;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.eyurikeucn
	  section.data(19).logicalSrcIdx = 30;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.a5embkrp0u
	  section.data(20).logicalSrcIdx = 31;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.lh04ozorvo
	  section.data(21).logicalSrcIdx = 32;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.f04eeuwpls
	  section.data(22).logicalSrcIdx = 33;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.nyiiqtb3pj
	  section.data(23).logicalSrcIdx = 34;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.gcums0dzz2
	  section.data(24).logicalSrcIdx = 35;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.lhf2yly352
	  section.data(25).logicalSrcIdx = 36;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.aabtyyllyb
	  section.data(26).logicalSrcIdx = 37;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.g03azz2emd
	  section.data(27).logicalSrcIdx = 38;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.gtt25diae4
	  section.data(28).logicalSrcIdx = 39;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.bzrmjhnabu
	  section.data(29).logicalSrcIdx = 40;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.is3dc1o4zz
	  section.data(30).logicalSrcIdx = 41;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.nwimzqy5ar
	  section.data(31).logicalSrcIdx = 42;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.nb1qo1noy1
	  section.data(32).logicalSrcIdx = 43;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.gxjoulpb2m
	  section.data(33).logicalSrcIdx = 44;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.fau1pec2yx
	  section.data(34).logicalSrcIdx = 45;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.piada000ef
	  section.data(35).logicalSrcIdx = 46;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.igchwvemyk
	  section.data(36).logicalSrcIdx = 47;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.m0usptq44k
	  section.data(37).logicalSrcIdx = 48;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.ku2cbhbb3u
	  section.data(38).logicalSrcIdx = 49;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.f4ygo2hyze
	  section.data(39).logicalSrcIdx = 50;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.g3mxxyfx5h
	  section.data(40).logicalSrcIdx = 51;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.mdbfuljwns
	  section.data(41).logicalSrcIdx = 52;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.ha0jipw4xl
	  section.data(42).logicalSrcIdx = 53;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.dxh0qu5kpi
	  section.data(43).logicalSrcIdx = 54;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.gsrotkxe3w
	  section.data(44).logicalSrcIdx = 55;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.aa1kkeyuws
	  section.data(45).logicalSrcIdx = 56;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.lsvhhiyuzl
	  section.data(46).logicalSrcIdx = 57;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.gnkz3gjw5b
	  section.data(47).logicalSrcIdx = 58;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.b4wblkxudx
	  section.data(48).logicalSrcIdx = 59;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtDW.hum4puctey
	  section.data(49).logicalSrcIdx = 60;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtDW.py0x5xqxsn
	  section.data(50).logicalSrcIdx = 61;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtDW.gumb4mtpd4
	  section.data(51).logicalSrcIdx = 62;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtDW.ouwqkrvapp
	  section.data(52).logicalSrcIdx = 63;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtDW.avoetnry4f
	  section.data(53).logicalSrcIdx = 64;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtDW.j3w0jjg10i
	  section.data(54).logicalSrcIdx = 65;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtDW.nzmye2eqv0
	  section.data(55).logicalSrcIdx = 66;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtDW.azmsy2zntv
	  section.data(56).logicalSrcIdx = 67;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtDW.bnqfvsepi0
	  section.data(57).logicalSrcIdx = 68;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtDW.ahd5nxo5ee
	  section.data(58).logicalSrcIdx = 69;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtDW.hwdzla2kb2
	  section.data(59).logicalSrcIdx = 70;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtDW.l25nib43el
	  section.data(60).logicalSrcIdx = 71;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtDW.ptzwk443bp
	  section.data(61).logicalSrcIdx = 72;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtDW.gn4pfafhsz
	  section.data(62).logicalSrcIdx = 73;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtDW.ndnwrahj5v
	  section.data(63).logicalSrcIdx = 74;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtDW.o50nrjnd44
	  section.data(64).logicalSrcIdx = 75;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtDW.j4zuphpirj
	  section.data(65).logicalSrcIdx = 76;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtDW.hcsxuwehmb
	  section.data(66).logicalSrcIdx = 77;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtDW.bm2gxumckz
	  section.data(67).logicalSrcIdx = 78;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtDW.jjazmhpwwr
	  section.data(68).logicalSrcIdx = 79;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtDW.evijjolyva
	  section.data(69).logicalSrcIdx = 80;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtDW.pxp5ilgmi3
	  section.data(70).logicalSrcIdx = 81;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtDW.jezkree5dg
	  section.data(71).logicalSrcIdx = 82;
	  section.data(71).dtTransOffset = 70;
	
	  ;% rtDW.bkak5fqmq4
	  section.data(72).logicalSrcIdx = 83;
	  section.data(72).dtTransOffset = 71;
	
	  ;% rtDW.flmlbqbmbh
	  section.data(73).logicalSrcIdx = 84;
	  section.data(73).dtTransOffset = 72;
	
	  ;% rtDW.gkm0s0ctrk
	  section.data(74).logicalSrcIdx = 85;
	  section.data(74).dtTransOffset = 73;
	
	  ;% rtDW.iob4nznmac
	  section.data(75).logicalSrcIdx = 86;
	  section.data(75).dtTransOffset = 74;
	
	  ;% rtDW.gcanzh043u
	  section.data(76).logicalSrcIdx = 87;
	  section.data(76).dtTransOffset = 75;
	
	  ;% rtDW.phud5qd132
	  section.data(77).logicalSrcIdx = 88;
	  section.data(77).dtTransOffset = 76;
	
	  ;% rtDW.jxk3l5lam0
	  section.data(78).logicalSrcIdx = 89;
	  section.data(78).dtTransOffset = 77;
	
	  ;% rtDW.atpqvqjfs5
	  section.data(79).logicalSrcIdx = 90;
	  section.data(79).dtTransOffset = 78;
	
	  ;% rtDW.ac2uu54gd3
	  section.data(80).logicalSrcIdx = 91;
	  section.data(80).dtTransOffset = 79;
	
	  ;% rtDW.mw5olxwdvr
	  section.data(81).logicalSrcIdx = 92;
	  section.data(81).dtTransOffset = 80;
	
	  ;% rtDW.bslfr4ae1c
	  section.data(82).logicalSrcIdx = 93;
	  section.data(82).dtTransOffset = 81;
	
	  ;% rtDW.nviurbkyfu
	  section.data(83).logicalSrcIdx = 94;
	  section.data(83).dtTransOffset = 82;
	
	  ;% rtDW.gksf2y3xqu
	  section.data(84).logicalSrcIdx = 95;
	  section.data(84).dtTransOffset = 83;
	
	  ;% rtDW.nyzomkvmej
	  section.data(85).logicalSrcIdx = 96;
	  section.data(85).dtTransOffset = 84;
	
	  ;% rtDW.ast1vf5n54
	  section.data(86).logicalSrcIdx = 97;
	  section.data(86).dtTransOffset = 85;
	
	  ;% rtDW.jionimgfgx
	  section.data(87).logicalSrcIdx = 98;
	  section.data(87).dtTransOffset = 86;
	
	  ;% rtDW.de0spn04mt
	  section.data(88).logicalSrcIdx = 99;
	  section.data(88).dtTransOffset = 87;
	
	  ;% rtDW.gftgep1sjl
	  section.data(89).logicalSrcIdx = 100;
	  section.data(89).dtTransOffset = 88;
	
	  ;% rtDW.c2oj5ebuij
	  section.data(90).logicalSrcIdx = 101;
	  section.data(90).dtTransOffset = 89;
	
	  ;% rtDW.f5q1bnr2od
	  section.data(91).logicalSrcIdx = 102;
	  section.data(91).dtTransOffset = 90;
	
	  ;% rtDW.lpvwxxwypj
	  section.data(92).logicalSrcIdx = 103;
	  section.data(92).dtTransOffset = 91;
	
	  ;% rtDW.mu0wco4dhv
	  section.data(93).logicalSrcIdx = 104;
	  section.data(93).dtTransOffset = 92;
	
	  ;% rtDW.mw4azdjt0i
	  section.data(94).logicalSrcIdx = 105;
	  section.data(94).dtTransOffset = 93;
	
	  ;% rtDW.hpobr5dnto
	  section.data(95).logicalSrcIdx = 106;
	  section.data(95).dtTransOffset = 94;
	
	  ;% rtDW.cayqsmxyey
	  section.data(96).logicalSrcIdx = 107;
	  section.data(96).dtTransOffset = 95;
	
	  ;% rtDW.b4ylysn521
	  section.data(97).logicalSrcIdx = 108;
	  section.data(97).dtTransOffset = 96;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.edr3xhipix
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.bbw2skrhgj
	  section.data(2).logicalSrcIdx = 110;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtDW.h4qlg5tcho
	  section.data(3).logicalSrcIdx = 111;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtDW.nvlp11rn3a
	  section.data(4).logicalSrcIdx = 112;
	  section.data(4).dtTransOffset = 6;
	
	  ;% rtDW.nusy4aj0zr
	  section.data(5).logicalSrcIdx = 113;
	  section.data(5).dtTransOffset = 7;
	
	  ;% rtDW.i33y5j4e2i
	  section.data(6).logicalSrcIdx = 114;
	  section.data(6).dtTransOffset = 8;
	
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


  targMap.checksum0 = 1599401393;
  targMap.checksum1 = 3640155459;
  targMap.checksum2 = 4139718532;
  targMap.checksum3 = 1236896111;

