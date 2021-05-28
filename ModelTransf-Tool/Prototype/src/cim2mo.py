// define an extension function
function userFunction($param , $param2)
{
  if(is_numeric($param2)){
    echo("userspace function called cp1\n");
    $result = $param2*2;
    return $result;
  }
}

function userFunctionExample($saxon, $proc, $xmlfile, $xslFile){
  echo '<b>userFunctionExample:</b><br/>';
  global $resultg;

  $saxon->registerPHPFunctions(" /usr/lib/php/20170718/saxon");
  $proc->setSourceFromFile($xmlfile);
  $proc->compileFromFile($xslFile);

  $result = $proc->transformToString();
  if($result != null) {
    echo 'Output=======:'.$result;
  } else {
    echo "Result is null";
    if($proc->exceptionOccurred()){
      echo "Exception occurred";
    }
    $errCount = $proc->getExceptionCount();
    for($i=0;$i<$errCount;$i++) {
      echo 'Error Message='.$proc->getErrorMessage($i);
    }
  }

  $proc->clearParameters();
  $proc->clearProperties();

}