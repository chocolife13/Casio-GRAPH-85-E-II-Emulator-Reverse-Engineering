// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00433f80
// entry: 00433f80  size: 632


uint FUN_00433f80(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_7c [24];
  char local_64 [4];
  char local_60 [4];
  char local_5c [92];
  
  local_a0 = 0;
  bVar1 = false;
  local_9c = (undefined1)param_1;
  local_9b = (undefined1)param_2;
  local_98 = 1;
  local_94 = 1;
  local_90 = FUN_00527440(param_1,param_2);
  local_8c = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          do {
            if (!bVar1) {
              iVar3 = FUN_00527570(param_1,param_2,local_94 + -1 + local_98,local_7c);
              if (iVar3 == 0) {
                FUN_004b5030(local_7c,local_64);
              }
              else {
                local_64[0] = s_Mem_ERROR_0057ebbc[0];
                local_64[1] = s_Mem_ERROR_0057ebbc[1];
                local_64[2] = s_Mem_ERROR_0057ebbc[2];
                local_64[3] = s_Mem_ERROR_0057ebbc[3];
                local_60[0] = s_Mem_ERROR_0057ebbc[4];
                local_60[1] = s_Mem_ERROR_0057ebbc[5];
                local_60[2] = s_Mem_ERROR_0057ebbc[6];
                local_60[3] = s_Mem_ERROR_0057ebbc[7];
                local_5c[0] = s_Mem_ERROR_0057ebbc[8];
                local_5c[1] = s_Mem_ERROR_0057ebbc[9];
              }
            }
            FUN_00414240();
            FUN_004345f0(&local_9c,local_64);
            FUN_00434520(&local_9c);
            FUN_00434350();
            FUN_004344a0(&local_9c);
            FUN_004344e0(&local_9c);
            FUN_00538b30();
            iVar3 = FUN_00526620(&local_a0);
          } while (iVar3 != 0);
          if (0x754a < local_a0) break;
          if (local_a0 == 0x754a) {
            FUN_004b5ad0(local_7c,local_64);
            bVar1 = true;
          }
          else {
            switch(local_a0) {
            case 0x7532:
            case 0x7534:
              return local_a0;
            case 0x753f:
              iVar3 = FUN_005387b0();
              if (iVar3 < 0) {
                return local_a0;
              }
              break;
            case 0x7542:
            case 0x7544:
              FUN_004347a0(&local_9c);
              bVar1 = false;
              break;
            case 0x7545:
            case 0x7547:
              FUN_004347e0(&local_9c);
              bVar1 = false;
            }
          }
        }
        if (local_a0 < 0x794b) break;
        if (local_a0 == 0x794b) {
          FUN_004b6330(local_7c,local_64,0);
          bVar1 = true;
        }
        else if (local_a0 == 0x794c) {
          FUN_004b6330(local_7c,local_64,1);
          bVar1 = true;
        }
      }
      if (local_a0 != 0x794a) break;
      FUN_004b6300(local_7c,local_64);
      bVar1 = true;
    }
    if (local_a0 == 0x754d) break;
    if (local_a0 == 0x754e) {
      cVar2 = FUN_00526090(0x22);
      if (cVar2 == '\x03') {
        cVar2 = '\0';
      }
      FUN_005237c0(1);
      FUN_0052eb10((int)cVar2);
      FUN_00523800(1);
    }
    else if (local_a0 == 0x755e) {
      FUN_004b5e70(local_7c,local_64);
      bVar1 = true;
    }
  }
  return 0x754d;
}

