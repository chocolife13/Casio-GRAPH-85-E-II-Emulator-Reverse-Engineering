// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005554f0
// entry: 005554f0  size: 291


uint * FUN_005554f0(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_3 != 0) {
    uVar4 = (uint)param_1 & 3;
    puVar5 = param_1;
    while (uVar4 != 0) {
      uVar4 = *puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      if ((byte)uVar4 == 0) goto LAB_0055554b;
      uVar4 = (uint)puVar5 & 3;
    }
    do {
      do {
        puVar6 = puVar5;
        puVar5 = puVar6 + 1;
      } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
      uVar4 = *puVar6;
      if ((char)uVar4 == '\0') goto LAB_0055555b;
      if ((char)(uVar4 >> 8) == '\0') {
        puVar6 = (uint *)((int)puVar6 + 1);
        goto LAB_0055555b;
      }
      if ((uVar4 & 0xff0000) == 0) {
        puVar6 = (uint *)((int)puVar6 + 2);
        goto LAB_0055555b;
      }
    } while ((uVar4 & 0xff000000) != 0);
LAB_0055554b:
    puVar6 = (uint *)((int)puVar5 + -1);
LAB_0055555b:
    if (((uint)param_2 & 3) == 0) {
      uVar3 = param_3 >> 2;
    }
    else {
      do {
        bVar1 = (byte)*param_2;
        uVar4 = (uint)bVar1;
        param_2 = (uint *)((int)param_2 + 1);
        if (bVar1 == 0) goto LAB_005555aa;
        *(byte *)puVar6 = bVar1;
        puVar6 = (uint *)((int)puVar6 + 1);
        param_3 = param_3 - 1;
        if (param_3 == 0) goto LAB_005555a0;
      } while (((uint)param_2 & 3) != 0);
      uVar3 = param_3 >> 2;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar2 = *param_2;
      uVar4 = *param_2;
      param_2 = param_2 + 1;
      if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar4 == '\0') {
LAB_005555aa:
          *(byte *)puVar6 = (byte)uVar4;
          return param_1;
        }
        if ((char)(uVar4 >> 8) == '\0') {
          *(short *)puVar6 = (short)uVar4;
          return param_1;
        }
        if ((uVar4 & 0xff0000) == 0) {
          *(short *)puVar6 = (short)uVar4;
          *(byte *)((int)puVar6 + 2) = 0;
          return param_1;
        }
        if ((uVar4 & 0xff000000) == 0) {
          *puVar6 = uVar4;
          return param_1;
        }
      }
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      uVar4 = *param_2;
      param_2 = (uint *)((int)param_2 + 1);
      *(byte *)puVar6 = (byte)uVar4;
      puVar6 = (uint *)((int)puVar6 + 1);
      if ((byte)uVar4 == 0) {
        return param_1;
      }
    }
LAB_005555a0:
    *(byte *)puVar6 = (byte)param_3;
  }
  return param_1;
}

