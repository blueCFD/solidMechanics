//- how explicit component of sigma is to be calculated
word divSigmaExpMethod(mesh.solutionDict().subDict("stressedFoam").lookup("divSigmaExp"));
Info << divSigmaExpMethod << " method chosen for calculation of sigmaExp" << endl;
if(divSigmaExpMethod != "standard" && divSigmaExpMethod != "surface" && divSigmaExpMethod != "decompose" && divSigmaExpMethod != "laplacian")
  {
    FatalError << "divSigmaExp method " << divSigmaExpMethod << " not found!" << nl
	       << "valid methods are:\nstandard\nsurface\ndecompose\nlaplacian"
	       << exit(FatalError);
  }
