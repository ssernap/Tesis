  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 0;
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
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
    
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
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% rtB.hay0z4ydom
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.l2jfs00ccy
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 7;
	
	  ;% rtB.il3w4ovzm5
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 14;
	
	  ;% rtB.khywms0clb
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 15;
	
	  ;% rtB.pfk4qbtcfu
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 16;
	
	  ;% rtB.pjhhb5kquv
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 17;
	
	  ;% rtB.kcfetpaoaj
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 21;
	
	  ;% rtB.n1oykolxud
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 25;
	
	  ;% rtB.mopdhxqse4
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 30;
	
	  ;% rtB.jjfsxd2pht
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 34;
	
	  ;% rtB.crsv2a03b0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 39;
	
	  ;% rtB.jrta0gtdwd
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 43;
	
	  ;% rtB.od0udch0bu
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 48;
	
	  ;% rtB.ioszdbstmn
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 49;
	
	  ;% rtB.pjx0kmxjmu
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 53;
	
	  ;% rtB.itv2k1nlsr
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 54;
	
	  ;% rtB.jpvxooq51q
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 58;
	
	  ;% rtB.euf53gdk1f
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 59;
	
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
      
	  ;% rtDW.mxwpzq1ids
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.citycn5tuj
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.g0ybx5ny0s
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.hofd5gl0lv
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.kmxvynb5xg
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.lqg4ib442l
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 94;
      section.data(94)  = dumData; %prealloc
      
	  ;% rtDW.oh2nksyqvj
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.piiowhvoq3
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.n0nnoz5d3k
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.d3mtquumef
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.ojbdkm3g3k
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.m5lvlhykau
	  section.data(6).logicalSrcIdx = 11;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.i4aru4d13y
	  section.data(7).logicalSrcIdx = 12;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.psaiktqsay
	  section.data(8).logicalSrcIdx = 13;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.bf0cesukef
	  section.data(9).logicalSrcIdx = 14;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.hsfvbv5cr3
	  section.data(10).logicalSrcIdx = 15;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.mx3esgalu0.LoggedData
	  section.data(11).logicalSrcIdx = 16;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.cngcszp2rx.LoggedData
	  section.data(12).logicalSrcIdx = 17;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.brfygg1kqo.LoggedData
	  section.data(13).logicalSrcIdx = 18;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.jkbpraaal2.LoggedData
	  section.data(14).logicalSrcIdx = 19;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.flmlbqbmbh
	  section.data(15).logicalSrcIdx = 20;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.gkm0s0ctrk
	  section.data(16).logicalSrcIdx = 21;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.iob4nznmac
	  section.data(17).logicalSrcIdx = 22;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.gcanzh043u
	  section.data(18).logicalSrcIdx = 23;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.phud5qd132
	  section.data(19).logicalSrcIdx = 24;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.nyiiqtb3pj
	  section.data(20).logicalSrcIdx = 25;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.gcums0dzz2
	  section.data(21).logicalSrcIdx = 26;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.lhf2yly352
	  section.data(22).logicalSrcIdx = 27;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.aabtyyllyb
	  section.data(23).logicalSrcIdx = 28;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.g03azz2emd
	  section.data(24).logicalSrcIdx = 29;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.gtt25diae4
	  section.data(25).logicalSrcIdx = 30;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.bzrmjhnabu
	  section.data(26).logicalSrcIdx = 31;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.is3dc1o4zz
	  section.data(27).logicalSrcIdx = 32;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.nwimzqy5ar
	  section.data(28).logicalSrcIdx = 33;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.nb1qo1noy1
	  section.data(29).logicalSrcIdx = 34;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.jjazmhpwwr
	  section.data(30).logicalSrcIdx = 35;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.evijjolyva
	  section.data(31).logicalSrcIdx = 36;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.pxp5ilgmi3
	  section.data(32).logicalSrcIdx = 37;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.jezkree5dg
	  section.data(33).logicalSrcIdx = 38;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.bkak5fqmq4
	  section.data(34).logicalSrcIdx = 39;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.ku2cbhbb3u
	  section.data(35).logicalSrcIdx = 40;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.f4ygo2hyze
	  section.data(36).logicalSrcIdx = 41;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.g3mxxyfx5h
	  section.data(37).logicalSrcIdx = 42;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.mdbfuljwns
	  section.data(38).logicalSrcIdx = 43;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.ha0jipw4xl
	  section.data(39).logicalSrcIdx = 44;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.dxh0qu5kpi
	  section.data(40).logicalSrcIdx = 45;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.gsrotkxe3w
	  section.data(41).logicalSrcIdx = 46;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.aa1kkeyuws
	  section.data(42).logicalSrcIdx = 47;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.lsvhhiyuzl
	  section.data(43).logicalSrcIdx = 48;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.gnkz3gjw5b
	  section.data(44).logicalSrcIdx = 49;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.kswjmadgur
	  section.data(45).logicalSrcIdx = 50;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.jstvsrdxec
	  section.data(46).logicalSrcIdx = 51;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.bwrk1jrfjh
	  section.data(47).logicalSrcIdx = 52;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.far445l3om
	  section.data(48).logicalSrcIdx = 53;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtDW.jama3hkqjv
	  section.data(49).logicalSrcIdx = 54;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtDW.avoetnry4f
	  section.data(50).logicalSrcIdx = 55;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtDW.j3w0jjg10i
	  section.data(51).logicalSrcIdx = 56;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtDW.nzmye2eqv0
	  section.data(52).logicalSrcIdx = 57;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtDW.azmsy2zntv
	  section.data(53).logicalSrcIdx = 58;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtDW.bnqfvsepi0
	  section.data(54).logicalSrcIdx = 59;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtDW.ahd5nxo5ee
	  section.data(55).logicalSrcIdx = 60;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtDW.hwdzla2kb2
	  section.data(56).logicalSrcIdx = 61;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtDW.l25nib43el
	  section.data(57).logicalSrcIdx = 62;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtDW.ptzwk443bp
	  section.data(58).logicalSrcIdx = 63;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtDW.gn4pfafhsz
	  section.data(59).logicalSrcIdx = 64;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtDW.mu0wco4dhv
	  section.data(60).logicalSrcIdx = 65;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtDW.mw4azdjt0i
	  section.data(61).logicalSrcIdx = 66;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtDW.hpobr5dnto
	  section.data(62).logicalSrcIdx = 67;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtDW.cayqsmxyey
	  section.data(63).logicalSrcIdx = 68;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtDW.b4ylysn521
	  section.data(64).logicalSrcIdx = 69;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtDW.gpf31qpv5x
	  section.data(65).logicalSrcIdx = 70;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtDW.jrmucmc5l0
	  section.data(66).logicalSrcIdx = 71;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtDW.eow2enys5v
	  section.data(67).logicalSrcIdx = 72;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtDW.cb0yve1pxy
	  section.data(68).logicalSrcIdx = 73;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtDW.bz2upk2eq4
	  section.data(69).logicalSrcIdx = 74;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtDW.de0spn04mt
	  section.data(70).logicalSrcIdx = 75;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtDW.gftgep1sjl
	  section.data(71).logicalSrcIdx = 76;
	  section.data(71).dtTransOffset = 70;
	
	  ;% rtDW.c2oj5ebuij
	  section.data(72).logicalSrcIdx = 77;
	  section.data(72).dtTransOffset = 71;
	
	  ;% rtDW.f5q1bnr2od
	  section.data(73).logicalSrcIdx = 78;
	  section.data(73).dtTransOffset = 72;
	
	  ;% rtDW.lpvwxxwypj
	  section.data(74).logicalSrcIdx = 79;
	  section.data(74).dtTransOffset = 73;
	
	  ;% rtDW.ndnwrahj5v
	  section.data(75).logicalSrcIdx = 80;
	  section.data(75).dtTransOffset = 74;
	
	  ;% rtDW.o50nrjnd44
	  section.data(76).logicalSrcIdx = 81;
	  section.data(76).dtTransOffset = 75;
	
	  ;% rtDW.j4zuphpirj
	  section.data(77).logicalSrcIdx = 82;
	  section.data(77).dtTransOffset = 76;
	
	  ;% rtDW.hcsxuwehmb
	  section.data(78).logicalSrcIdx = 83;
	  section.data(78).dtTransOffset = 77;
	
	  ;% rtDW.bm2gxumckz
	  section.data(79).logicalSrcIdx = 84;
	  section.data(79).dtTransOffset = 78;
	
	  ;% rtDW.nviurbkyfu
	  section.data(80).logicalSrcIdx = 85;
	  section.data(80).dtTransOffset = 79;
	
	  ;% rtDW.gksf2y3xqu
	  section.data(81).logicalSrcIdx = 86;
	  section.data(81).dtTransOffset = 80;
	
	  ;% rtDW.nyzomkvmej
	  section.data(82).logicalSrcIdx = 87;
	  section.data(82).dtTransOffset = 81;
	
	  ;% rtDW.ast1vf5n54
	  section.data(83).logicalSrcIdx = 88;
	  section.data(83).dtTransOffset = 82;
	
	  ;% rtDW.jionimgfgx
	  section.data(84).logicalSrcIdx = 89;
	  section.data(84).dtTransOffset = 83;
	
	  ;% rtDW.j5smstjan3
	  section.data(85).logicalSrcIdx = 90;
	  section.data(85).dtTransOffset = 84;
	
	  ;% rtDW.dntzyn5tmg
	  section.data(86).logicalSrcIdx = 91;
	  section.data(86).dtTransOffset = 85;
	
	  ;% rtDW.pinay1nrr3
	  section.data(87).logicalSrcIdx = 92;
	  section.data(87).dtTransOffset = 86;
	
	  ;% rtDW.aek3fotj4l
	  section.data(88).logicalSrcIdx = 93;
	  section.data(88).dtTransOffset = 87;
	
	  ;% rtDW.ofysl11eyg
	  section.data(89).logicalSrcIdx = 94;
	  section.data(89).dtTransOffset = 88;
	
	  ;% rtDW.jxk3l5lam0
	  section.data(90).logicalSrcIdx = 95;
	  section.data(90).dtTransOffset = 89;
	
	  ;% rtDW.atpqvqjfs5
	  section.data(91).logicalSrcIdx = 96;
	  section.data(91).dtTransOffset = 90;
	
	  ;% rtDW.ac2uu54gd3
	  section.data(92).logicalSrcIdx = 97;
	  section.data(92).dtTransOffset = 91;
	
	  ;% rtDW.mw5olxwdvr
	  section.data(93).logicalSrcIdx = 98;
	  section.data(93).dtTransOffset = 92;
	
	  ;% rtDW.bslfr4ae1c
	  section.data(94).logicalSrcIdx = 99;
	  section.data(94).dtTransOffset = 93;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.alrqayrcnu
	  section.data(1).logicalSrcIdx = 100;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.dhe2ccms01
	  section.data(2).logicalSrcIdx = 101;
	  section.data(2).dtTransOffset = 4;
	
	  ;% rtDW.pfel4n10vu
	  section.data(3).logicalSrcIdx = 102;
	  section.data(3).dtTransOffset = 8;
	
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


  targMap.checksum0 = 794203140;
  targMap.checksum1 = 1665204939;
  targMap.checksum2 = 3883052603;
  targMap.checksum3 = 2955421286;

