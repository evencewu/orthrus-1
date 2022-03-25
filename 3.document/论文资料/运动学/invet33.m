function [dA,inA]=invet33(A)
 dA=det(A);
 if dA==0
    inA=inv(A'*A)*A';
 else
    inA=inv(A); 
 end
end