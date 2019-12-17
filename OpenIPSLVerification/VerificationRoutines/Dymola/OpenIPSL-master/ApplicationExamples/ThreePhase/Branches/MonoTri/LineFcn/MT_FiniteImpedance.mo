within ThreePhase.Branches.MonoTri.LineFcn;
function MT_FiniteImpedance
  import ThreePhase.Branches.MonoTri.MonoTriFcn.Inverse;
  import ThreePhase.Branches.MonoTri.MonoTriFcn.PositiveFilter;
  import ThreePhase.Branches.MonoTri.MonoTriFcn.NegZerFilter;
  input Real[1, 18] Yser;
  input Real[1, 18] Yshtk;
  input Real[1, 18] Y012;
  output Real[1, 32] Y;

  // Getting data for the norton equivalent impedances
protected
  parameter Real g0=Y012[1, 1];
  parameter Real b0=Y012[1, 2];
  parameter Real g1=Y012[1, 9];
  parameter Real b1=Y012[1, 10];
  parameter Real g2=Y012[1, 17];
  parameter Real b2=Y012[1, 18];

  // Writing the Yabc norton equivalent matrix
  parameter Real g11=(g0 + g1 + g2)/3;
  parameter Real b11=(b0 + b1 + b2)/3;
  parameter Real g12=(2*g0 - g1 + b1*sqrt(3) - g2 - b2*sqrt(3))/6;
  parameter Real b12=(2*b0 - g1*sqrt(3) - b1 + g2*sqrt(3) - b2)/6;
  parameter Real g13=(2*g0 - g1 - b1*sqrt(3) - g2 + b2*sqrt(3))/6;
  parameter Real b13=(2*b0 + g1*sqrt(3) - b1 - g2*sqrt(3) - b2)/6;
  parameter Real g21=g13;
  parameter Real b21=b13;
  parameter Real g22=g11;
  parameter Real b22=b11;
  parameter Real g23=g12;
  parameter Real b23=b12;
  parameter Real g31=g12;
  parameter Real b31=b12;
  parameter Real g32=g13;
  parameter Real b32=b13;
  parameter Real g33=g11;
  parameter Real b33=b11;

  // Writing Yabc norton equivalent

  parameter Real[1, 18] Yabcnrt=[g11, b11, g12, b12, g13, b13, g21, b21, g22,
      b22, g23, b23, g31, b31, g32, b32, g33, b33];

  // Writing the calculations for matrix that will be placed in parallel with Yshtm and the matrix that will replace Yser
  parameter Real[1, 18] A=Yabcnrt + Yshtk;
  parameter Real[1, 18] B=Inverse(A);
  parameter Real[1, 18] C=Inverse(Yser);
  parameter Real[1, 18] D=B + C;
  parameter Real[1, 18] E=Inverse(D);
  parameter Real[1, 18] Yshtm2=NegZerFilter(E);
  parameter Real[1, 18] Ysernew=PositiveFilter(Yser);
  parameter Real[1, 18] Yshtm=Yshtk;
  // Specifically in Transmission Line
  parameter Real[1, 18] Yshtmnew=Yshtm + Yshtm2;

  // Now, we can calculate everything normally

  //Writing the Y_ser matrix
  parameter Real Gaaser=Ysernew[1, 1];
  parameter Real Baaser=Ysernew[1, 2];
  parameter Real Gabser=Ysernew[1, 3];
  parameter Real Babser=Ysernew[1, 4];
  parameter Real Gacser=Ysernew[1, 5];
  parameter Real Bacser=Ysernew[1, 6];
  parameter Real Gbaser=Ysernew[1, 7];
  parameter Real Bbaser=Ysernew[1, 8];
  parameter Real Gbbser=Ysernew[1, 9];
  parameter Real Bbbser=Ysernew[1, 10];
  parameter Real Gbcser=Ysernew[1, 11];
  parameter Real Bbcser=Ysernew[1, 12];
  parameter Real Gcaser=Ysernew[1, 13];
  parameter Real Bcaser=Ysernew[1, 14];
  parameter Real Gcbser=Ysernew[1, 15];
  parameter Real Bcbser=Ysernew[1, 16];
  parameter Real Gccser=Ysernew[1, 17];
  parameter Real Bccser=Ysernew[1, 18];
  //Writing the Y_sht matrix
  parameter Real Gaasht=Yshtmnew[1, 1];
  parameter Real Baasht=Yshtmnew[1, 2];
  parameter Real Gabsht=Yshtmnew[1, 3];
  parameter Real Babsht=Yshtmnew[1, 4];
  parameter Real Gacsht=Yshtmnew[1, 5];
  parameter Real Bacsht=Yshtmnew[1, 6];
  parameter Real Gbasht=Yshtmnew[1, 7];
  parameter Real Bbasht=Yshtmnew[1, 8];
  parameter Real Gbbsht=Yshtmnew[1, 9];
  parameter Real Bbbsht=Yshtmnew[1, 10];
  parameter Real Gbcsht=Yshtmnew[1, 11];
  parameter Real Bbcsht=Yshtmnew[1, 12];
  parameter Real Gcasht=Yshtmnew[1, 13];
  parameter Real Bcasht=Yshtmnew[1, 14];
  parameter Real Gcbsht=Yshtmnew[1, 15];
  parameter Real Bcbsht=Yshtmnew[1, 16];
  parameter Real Gccsht=Yshtmnew[1, 17];
  parameter Real Bccsht=Yshtmnew[1, 18];
  //Calculating the parameters for the MonoxTri interface
  //Calculating some auxiliary variables
  parameter Real G1=(Gaasht + Gaaser + Gbbsht + Gbbser + Gccsht + Gccser)/3;
  parameter Real B1=(Baasht + Baaser + Bbbsht + Bbbser + Bccsht + Bccser)/3;
  parameter Real G2=(Gbasht + Gbaser + Gacsht + Gacser + Gcbsht + Gcbser)/3;
  parameter Real B2=(Bbasht + Bbaser + Bacsht + Bacser + Bcbsht + Bcbser)/3;
  parameter Real G3=(Gabsht + Gabser + Gbcsht + Gbcser + Gcasht + Gcaser)/3;
  parameter Real B3=(Babsht + Babser + Bbcsht + Bbcser + Bcasht + Bcaser)/3;
  //Calculating the element of Matrix A
  parameter Real Ar=(2*G1 - G2 - sqrt(3)*B2 - G3 + sqrt(3)*B3)/2;
  parameter Real Ai=(2*B1 - B2 + sqrt(3)*G2 - B3 - sqrt(3)*G3)/2;
  //Calculating elements of Matrix MB
  parameter Real MB1r=-(2*Gaaser - Gbaser - sqrt(3)*Bbaser - Gcaser + sqrt(3)*
      Bcaser)/6;
  parameter Real MB1i=-(2*Baaser - Bbaser + sqrt(3)*Gbaser - Bcaser - sqrt(3)*
      Gcaser)/6;
  parameter Real MB2r=-(2*Gabser - Gbbser - sqrt(3)*Bbbser - Gcbser + sqrt(3)*
      Bcbser)/6;
  parameter Real MB2i=-(2*Babser - Bbbser + sqrt(3)*Gbbser - Bcbser - sqrt(3)*
      Gcbser)/6;
  parameter Real MB3r=-(2*Gacser - Gbcser - sqrt(3)*Bbcser - Gccser + sqrt(3)*
      Bccser)/6;
  parameter Real MB3i=-(2*Bacser - Bbcser + sqrt(3)*Gbcser - Bccser - sqrt(3)*
      Gccser)/6;
  //Calculating elements of Matrix C
  parameter Real C1r=-(2*Gaaser - Gabser + sqrt(3)*Babser - Gacser - sqrt(3)*
      Bacser)/2;
  parameter Real C1i=-(2*Baaser - Babser - sqrt(3)*Gabser - Bacser + sqrt(3)*
      Gacser)/2;
  parameter Real C2r=-(2*Gbaser - Gbbser + sqrt(3)*Bbbser - Gbcser - sqrt(3)*
      Bbcser)/2;
  parameter Real C2i=-(2*Bbaser - Bbbser - sqrt(3)*Gbbser - Bbcser + sqrt(3)*
      Gbcser)/2;
  parameter Real C3r=-(2*Gcaser - Gcbser + sqrt(3)*Bcbser - Gccser - sqrt(3)*
      Bccser)/2;
  parameter Real C3i=-(2*Bcaser - Bcbser - sqrt(3)*Gcbser - Bccser + sqrt(3)*
      Gccser)/2;
  //Calculating elements of Matrix D
  parameter Real D11r=Gaaser + Gaasht;
  parameter Real D11i=Baaser + Baasht;
  parameter Real D12r=Gabser + Gabsht;
  parameter Real D12i=Babser + Babsht;
  parameter Real D13r=Gacser + Gacsht;
  parameter Real D13i=Bacser + Bacsht;
  parameter Real D21r=Gbaser + Gbasht;
  parameter Real D21i=Bbaser + Bbasht;
  parameter Real D22r=Gbbser + Gbbsht;
  parameter Real D22i=Bbbser + Bbbsht;
  parameter Real D23r=Gbcser + Gbcsht;
  parameter Real D23i=Bbcser + Bbcsht;
  parameter Real D31r=Gcaser + Gcasht;
  parameter Real D31i=Bcaser + Bcasht;
  parameter Real D32r=Gcbser + Gcbsht;
  parameter Real D32i=Bcbser + Bcbsht;
  parameter Real D33r=Gccser + Gccsht;
  parameter Real D33i=Bccser + Bccsht;
algorithm
  Y := [Ar, Ai, MB1r, MB1i, MB2r, MB2i, MB3r, MB3i, C1r, C1i, C2r, C2i, C3r,
    C3i, D11r, D11i, D12r, D12i, D13r, D13i, D21r, D21i, D22r, D22i, D23r, D23i,
    D31r, D31i, D32r, D32i, D33r, D33i];

end MT_FiniteImpedance;
