within ThreePhase.Branches.MonoTri.MonoTriFcn;
function Inverse
  input Real[1, 18] I;
  output Real[1, 18] O;
  // Writing every element of the matrix to be inverted
protected
  parameter Real a11=I[1, 1];
  parameter Real b11=I[1, 2];
  parameter Real a12=I[1, 3];
  parameter Real b12=I[1, 4];
  parameter Real a13=I[1, 5];
  parameter Real b13=I[1, 6];
  parameter Real a21=I[1, 7];
  parameter Real b21=I[1, 8];
  parameter Real a22=I[1, 9];
  parameter Real b22=I[1, 10];
  parameter Real a23=I[1, 11];
  parameter Real b23=I[1, 12];
  parameter Real a31=I[1, 13];
  parameter Real b31=I[1, 14];
  parameter Real a32=I[1, 15];
  parameter Real b32=I[1, 16];
  parameter Real a33=I[1, 17];
  parameter Real b33=I[1, 18];
  // Calculating the real and imaginary part of the matrix's determinant
  parameter Real A=a13*a21*a32 - a13*b21*b32 - b13*a21*b32 - b13*b21*a32 + a12*
      a23*a31 - a12*b23*b31 - b12*a23*b31 - b12*b23*a31 + a11*a22*a33 - a11*b22
      *b33 - b11*a22*b33 - b11*b22*a33 - (a33*a21*a12 - a33*b21*b12 - b33*a21*
      b12 - b33*b21*a12) - (a11*a23*a32 - a11*b23*b32 - b11*a23*b32 - b11*b23*
      a32) - (a13*a22*a31 - a13*b22*b31 - b13*a22*b31 - b13*b22*a31);
  parameter Real B=a13*a21*b32 + a13*b21*a32 + b13*a21*a32 - b13*b21*b32 + a12*
      a23*b31 + a12*b23*a31 + b12*a23*a31 - b12*b23*b31 + a11*a22*b33 + a11*b22
      *a33 + b11*a22*a33 - b11*b22*b33 - (a33*a21*b12 + a33*b21*a12 + b33*a21*
      a12 - b33*b21*b12) - (a11*a23*b32 + a11*b23*a32 + b11*a23*a32 - b11*b23*
      b32) - (a13*a22*b31 + a13*b22*a31 + b13*a22*a31 - b13*b22*b31);
  // Calculating the elements for the inverted matrix
  parameter Real r11=(A*(a22*a33 - a32*a23 - b22*b33 + b32*b23) + B*(a22*b33 +
      b22*a33 - a32*b23 - b32*a23))/(A*A + B*B);
  parameter Real x11=(A*(a22*b33 + b22*a33 - a32*b23 - b32*a23) - B*(a22*a33 -
      a32*a23 - b22*b33 + b32*b23))/(A*A + B*B);
  parameter Real r12=(A*(a13*a32 - a12*a33 - b13*b32 + b12*b33) + B*(a13*b32 +
      b13*a32 - a12*b33 - b12*a33))/(A*A + B*B);
  parameter Real x12=(A*(a13*b32 + b13*a32 - a12*b33 - b12*a33) - B*(a13*a32 -
      a12*a33 - b13*b32 + b12*b33))/(A*A + B*B);
  parameter Real r13=(A*(a12*a23 - a13*a22 - b12*b23 + b13*b22) + B*(a12*b23 +
      b12*a23 - a13*b22 - b13*a22))/(A*A + B*B);
  parameter Real x13=(A*(a12*b23 + b12*a23 - a13*b22 - b13*a22) - B*(a12*a23 -
      a13*a22 - b12*b23 + b13*b22))/(A*A + B*B);
  parameter Real r21=(A*(a23*a31 - a21*a33 - b23*b31 + b21*b33) + B*(a23*b31 +
      b23*a31 - a21*b33 - b21*a33))/(A*A + B*B);
  parameter Real x21=(A*(a23*b31 + b23*a31 - a21*b33 - b21*a33) - B*(a23*a31 -
      a21*a33 - b23*b31 + b21*b33))/(A*A + B*B);
  parameter Real r22=(A*(a11*a33 - a13*a31 - b11*b33 + b13*b31) + B*(a11*b33 +
      b11*a33 - a13*b31 - b13*a31))/(A*A + B*B);
  parameter Real x22=(A*(a11*b33 + b11*a33 - a13*b31 - b13*a31) - B*(a11*a33 -
      a13*a31 - b11*b33 + b13*b31))/(A*A + B*B);
  parameter Real r23=(A*(a13*a21 - a11*a23 - b13*b21 + b11*b23) + B*(a13*b21 +
      b13*a21 - a11*b23 - b11*a23))/(A*A + B*B);
  parameter Real x23=(A*(a13*b21 + b13*a21 - a11*b23 - b11*a23) - B*(a13*a21 -
      a11*a23 - b13*b21 + b11*b23))/(A*A + B*B);
  parameter Real r31=(A*(a21*a32 - a22*a31 - b21*b32 + b22*b31) + B*(a21*b32 +
      b21*a32 - a22*b31 - b22*a31))/(A*A + B*B);
  parameter Real x31=(A*(a21*b32 + b21*a32 - a22*b31 - b22*a31) - B*(a21*a32 -
      a22*a31 - b21*b32 + b22*b31))/(A*A + B*B);
  parameter Real r32=(A*(a12*a31 - a11*a32 - b12*b31 + b11*b32) + B*(a12*b31 +
      b12*a31 - a11*b32 - b11*a32))/(A*A + B*B);
  parameter Real x32=(A*(a12*b31 + b12*a31 - a11*b32 - b11*a32) - B*(a12*a31 -
      a11*a32 - b12*b31 + b11*b32))/(A*A + B*B);
  parameter Real r33=(A*(a11*a22 - a12*a21 - b11*b22 + b12*b21) + B*(a11*b22 +
      b11*a22 - a12*b21 - b12*a21))/(A*A + B*B);
  parameter Real x33=(A*(a11*b22 + b11*a22 - a12*b21 - b12*a21) - B*(a11*a22 -
      a12*a21 - b11*b22 + b12*b21))/(A*A + B*B);
algorithm
  O := [r11, x11, r12, x12, r13, x13, r21, x21, r22, x22, r23, x23, r31, x31,
    r32, x32, r33, x33];
end Inverse;
