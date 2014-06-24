<?php

/**
 * file: DownloadStream.php
 *
 * @author mrhanlon
 */

class DownloadStream {
  protected $buffer;

  function stream_open($path, $mode, $options, &$opened_path) {
    // Has to be declared, it seems...
    return true;
  }

  public function stream_write($data) {
    print $data;
    return strlen($data);
  }
}
