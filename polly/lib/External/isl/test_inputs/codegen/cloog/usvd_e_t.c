{
  for (int c0 = 0; c0 <= 2; c0 += 1) {
    S1(c0, 0, 0);
    for (int c1 = 0; c1 <= 4; c1 += 1)
      S2(c0, c1, 0);
  }
  S1(3, 0, 0);
  for (int c1 = 0; c1 <= 4; c1 += 1)
    S2(3, c1, 0);
  for (int c1 = 7; c1 <= 11; c1 += 1)
    S8(3, c1, 0);
  S1(4, 0, 0);
  S2(4, 0, 0);
  S3(4, 0, 0);
  S5(4, 0, 0);
  for (int c1 = 1; c1 <= 4; c1 += 1) {
    S2(4, c1, 0);
    S5(4, c1, 0);
  }
  for (int c1 = 7; c1 <= 11; c1 += 1)
    S8(4, c1, 0);
  for (int c0 = 5; c0 <= 6; c0 += 1) {
    for (int c1 = -4; c1 < c0 - 8; c1 += 1)
      S6(c0, c1, 0);
    for (int c1 = c0 - 9; c1 < 0; c1 += 1)
      S7(c0, c1, 0);
    S3(c0, 0, 0);
    S7(c0, 0, 0);
    for (int c1 = 1; c1 < c0 - 3; c1 += 1)
      S4(c0, c1, -1);
    for (int c1 = c0 - 4; c1 <= 4; c1 += 1)
      S5(c0, c1, 0);
    for (int c1 = 7; c1 <= 11; c1 += 1)
      S8(c0, c1, 0);
  }
  for (int c1 = -4; c1 < -1; c1 += 1)
    S6(7, c1, 0);
  for (int c1 = -2; c1 < 0; c1 += 1)
    S7(7, c1, 0);
  S3(7, 0, 0);
  S7(7, 0, 0);
  for (int c1 = 1; c1 <= 3; c1 += 1)
    S4(7, c1, -1);
  for (int c1 = 3; c1 <= 4; c1 += 1)
    S5(7, c1, 0);
  S9(7, 4, 0);
  S10(7, 4, 0);
  S11(7, 4, 0);
  S21(7, 4, 0);
  S23(7, 4, 0);
  S11(7, 4, 1);
  S16(7, 4, 1);
  S17(7, 4, 1);
  for (int c2 = 2; c2 <= 4; c2 += 1)
    S11(7, 4, c2);
  S12(7, 5, 0);
  S21(7, 5, 0);
  S22(7, 5, 0);
  S23(7, 5, 0);
  S12(7, 5, 1);
  S16(7, 5, 1);
  S17(7, 5, 1);
  for (int c2 = 2; c2 <= 4; c2 += 1)
    S12(7, 5, c2);
  S21(7, 6, 0);
  S22(7, 6, 0);
  S23(7, 6, 0);
  for (int c1 = 7; c1 <= 8; c1 += 1) {
    S8(7, c1, 0);
    S21(7, c1, 0);
    S22(7, c1, 0);
    S23(7, c1, 0);
  }
  S8(7, 9, 0);
  S22(7, 9, 0);
  for (int c1 = 10; c1 <= 11; c1 += 1)
    S8(7, c1, 0);
  for (int c1 = -4; c1 < 0; c1 += 1)
    S6(8, c1, 0);
  S7(8, -1, 0);
  S3(8, 0, 0);
  S7(8, 0, 0);
  S19(8, 1, -2);
  S4(8, 1, -1);
  S19(8, 1, -1);
  S19(8, 1, 0);
  S15(8, 1, 4);
  S18(8, 1, 4);
  for (int c2 = -4; c2 < -2; c2 += 1) {
    S14(8, 2, c2);
    S20(8, 2, c2);
  }
  S14(8, 2, -2);
  S19(8, 2, -2);
  S20(8, 2, -2);
  S4(8, 2, -1);
  S14(8, 2, -1);
  S19(8, 2, -1);
  S20(8, 2, -1);
  S14(8, 2, 0);
  S19(8, 2, 0);
  S20(8, 2, 0);
  S15(8, 2, 4);
  S18(8, 2, 4);
  for (int c2 = -4; c2 < -1; c2 += 1) {
    S14(8, 3, c2);
    S20(8, 3, c2);
  }
  S4(8, 3, -1);
  S14(8, 3, -1);
  S20(8, 3, -1);
  S14(8, 3, 0);
  S20(8, 3, 0);
  S15(8, 3, 4);
  S18(8, 3, 4);
  for (int c2 = -4; c2 < -1; c2 += 1) {
    S14(8, 4, c2);
    S20(8, 4, c2);
  }
  S4(8, 4, -1);
  S14(8, 4, -1);
  S20(8, 4, -1);
  S5(8, 4, 0);
  S9(8, 4, 0);
  S10(8, 4, 0);
  S14(8, 4, 0);
  S20(8, 4, 0);
  S23(8, 4, 0);
  S13(8, 4, 1);
  S21(8, 4, 1);
  S23(8, 4, 1);
  S24(8, 4, 1);
  S13(8, 4, 2);
  S16(8, 4, 2);
  S17(8, 4, 2);
  S24(8, 4, 2);
  S13(8, 4, 3);
  S24(8, 4, 3);
  S13(8, 4, 4);
  S15(8, 4, 4);
  S23(8, 5, 0);
  S11(8, 5, 1);
  S21(8, 5, 1);
  S22(8, 5, 1);
  S23(8, 5, 1);
  S24(8, 5, 1);
  S11(8, 5, 2);
  S16(8, 5, 2);
  S17(8, 5, 2);
  S24(8, 5, 2);
  S11(8, 5, 3);
  S24(8, 5, 3);
  S11(8, 5, 4);
  S15(8, 5, 4);
  S23(8, 6, 0);
  S12(8, 6, 1);
  S21(8, 6, 1);
  S22(8, 6, 1);
  S23(8, 6, 1);
  S24(8, 6, 1);
  S12(8, 6, 2);
  S16(8, 6, 2);
  S17(8, 6, 2);
  S24(8, 6, 2);
  S12(8, 6, 3);
  S24(8, 6, 3);
  S12(8, 6, 4);
  for (int c1 = 7; c1 <= 8; c1 += 1) {
    S23(8, c1, 0);
    S21(8, c1, 1);
    S22(8, c1, 1);
    S23(8, c1, 1);
    for (int c2 = 1; c2 <= 3; c2 += 1)
      S24(8, c1, c2);
  }
  S22(8, 9, 1);
  S7(9, 0, 0);
  for (int c1 = 1; c1 <= 2; c1 += 1) {
    for (int c2 = -1; c2 <= 0; c2 += 1)
      S19(9, c1, c2);
    for (int c2 = 4; c2 <= 5; c2 += 1) {
      S15(9, c1, c2);
      S18(9, c1, c2);
    }
  }
  S20(9, 3, -4);
  for (int c2 = -3; c2 < -1; c2 += 1) {
    S14(9, 3, c2);
    S20(9, 3, c2);
  }
  for (int c2 = -1; c2 <= 0; c2 += 1) {
    S14(9, 3, c2);
    S19(9, 3, c2);
    S20(9, 3, c2);
  }
  for (int c2 = 4; c2 <= 5; c2 += 1) {
    S15(9, 3, c2);
    S18(9, 3, c2);
  }
  S20(9, 4, -4);
  for (int c2 = -3; c2 < 0; c2 += 1) {
    S14(9, 4, c2);
    S20(9, 4, c2);
  }
  S9(9, 4, 0);
  S10(9, 4, 0);
  S14(9, 4, 0);
  S20(9, 4, 0);
  for (int c2 = 0; c2 <= 1; c2 += 1)
    S23(9, 4, c2);
  S13(9, 4, 2);
  S21(9, 4, 2);
  S23(9, 4, 2);
  S24(9, 4, 2);
  S13(9, 4, 3);
  S16(9, 4, 3);
  S17(9, 4, 3);
  S24(9, 4, 3);
  S13(9, 4, 4);
  for (int c2 = 4; c2 <= 5; c2 += 1) {
    S15(9, 4, c2);
    S18(9, 4, c2);
  }
  for (int c2 = 0; c2 <= 1; c2 += 1)
    S23(9, 5, c2);
  S13(9, 5, 2);
  S21(9, 5, 2);
  S22(9, 5, 2);
  S23(9, 5, 2);
  S24(9, 5, 2);
  S13(9, 5, 3);
  S16(9, 5, 3);
  S17(9, 5, 3);
  S24(9, 5, 3);
  S13(9, 5, 4);
  for (int c2 = 4; c2 <= 5; c2 += 1)
    S15(9, 5, c2);
  for (int c2 = 0; c2 <= 1; c2 += 1)
    S23(9, 6, c2);
  S11(9, 6, 2);
  S21(9, 6, 2);
  S22(9, 6, 2);
  S23(9, 6, 2);
  S24(9, 6, 2);
  S11(9, 6, 3);
  S16(9, 6, 3);
  S17(9, 6, 3);
  S24(9, 6, 3);
  S11(9, 6, 4);
  for (int c2 = 0; c2 <= 1; c2 += 1)
    S23(9, 7, c2);
  S12(9, 7, 2);
  S21(9, 7, 2);
  S22(9, 7, 2);
  S23(9, 7, 2);
  S24(9, 7, 2);
  S12(9, 7, 3);
  S16(9, 7, 3);
  S17(9, 7, 3);
  S24(9, 7, 3);
  S12(9, 7, 4);
  for (int c2 = 0; c2 <= 1; c2 += 1)
    S23(9, 8, c2);
  S21(9, 8, 2);
  S22(9, 8, 2);
  S23(9, 8, 2);
  for (int c2 = 2; c2 <= 3; c2 += 1)
    S24(9, 8, c2);
  S22(9, 9, 2);
  for (int c1 = 1; c1 <= 3; c1 += 1) {
    S19(10, c1, 0);
    S26(10, c1, 3);
    S15(10, c1, 4);
    S18(10, c1, 4);
    S25(10, c1, 4);
    for (int c2 = 5; c2 <= 6; c2 += 1) {
      S15(10, c1, c2);
      S18(10, c1, c2);
    }
  }
  for (int c2 = -4; c2 < -2; c2 += 1)
    S20(10, 4, c2);
  for (int c2 = -2; c2 < 0; c2 += 1) {
    S14(10, 4, c2);
    S20(10, 4, c2);
  }
  S9(10, 4, 0);
  S10(10, 4, 0);
  S14(10, 4, 0);
  S19(10, 4, 0);
  S20(10, 4, 0);
  S13(10, 4, 3);
  S21(10, 4, 3);
  S24(10, 4, 3);
  S26(10, 4, 3);
  S13(10, 4, 4);
  S15(10, 4, 4);
  S16(10, 4, 4);
  S17(10, 4, 4);
  S18(10, 4, 4);
  S25(10, 4, 4);
  for (int c2 = 5; c2 <= 6; c2 += 1) {
    S15(10, 4, c2);
    S18(10, 4, c2);
  }
  S13(10, 5, 3);
  S21(10, 5, 3);
  S22(10, 5, 3);
  S24(10, 5, 3);
  S26(10, 5, 3);
  S13(10, 5, 4);
  S15(10, 5, 4);
  S16(10, 5, 4);
  S17(10, 5, 4);
  S18(10, 5, 4);
  S25(10, 5, 4);
  for (int c2 = 5; c2 <= 6; c2 += 1) {
    S15(10, 5, c2);
    S18(10, 5, c2);
  }
  S13(10, 6, 3);
  S21(10, 6, 3);
  S22(10, 6, 3);
  S24(10, 6, 3);
  S13(10, 6, 4);
  S16(10, 6, 4);
  S17(10, 6, 4);
  S11(10, 7, 3);
  S21(10, 7, 3);
  S22(10, 7, 3);
  S24(10, 7, 3);
  S11(10, 7, 4);
  S16(10, 7, 4);
  S17(10, 7, 4);
  S12(10, 8, 3);
  S21(10, 8, 3);
  S22(10, 8, 3);
  S24(10, 8, 3);
  S12(10, 8, 4);
  S16(10, 8, 4);
  S17(10, 8, 4);
  S22(10, 9, 3);
  for (int c0 = 11; c0 <= 14; c0 += 1)
    for (int c1 = 1; c1 <= 5; c1 += 1) {
      S26(c0, c1, 3);
      S25(c0, c1, 4);
    }
}
