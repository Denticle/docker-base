<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: src/proto/grpc/testing/echo_messages.proto

namespace Grpc\Testing;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Error status client expects to see.
 *
 * Generated from protobuf message <code>grpc.testing.ErrorStatus</code>
 */
class ErrorStatus extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>int32 code = 1;</code>
     */
    protected $code = 0;
    /**
     * Generated from protobuf field <code>string error_message = 2;</code>
     */
    protected $error_message = '';
    /**
     * Generated from protobuf field <code>string binary_error_details = 3;</code>
     */
    protected $binary_error_details = '';

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type int $code
     *     @type string $error_message
     *     @type string $binary_error_details
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\Src\Proto\Grpc\Testing\EchoMessages::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>int32 code = 1;</code>
     * @return int
     */
    public function getCode()
    {
        return $this->code;
    }

    /**
     * Generated from protobuf field <code>int32 code = 1;</code>
     * @param int $var
     * @return $this
     */
    public function setCode($var)
    {
        GPBUtil::checkInt32($var);
        $this->code = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string error_message = 2;</code>
     * @return string
     */
    public function getErrorMessage()
    {
        return $this->error_message;
    }

    /**
     * Generated from protobuf field <code>string error_message = 2;</code>
     * @param string $var
     * @return $this
     */
    public function setErrorMessage($var)
    {
        GPBUtil::checkString($var, True);
        $this->error_message = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string binary_error_details = 3;</code>
     * @return string
     */
    public function getBinaryErrorDetails()
    {
        return $this->binary_error_details;
    }

    /**
     * Generated from protobuf field <code>string binary_error_details = 3;</code>
     * @param string $var
     * @return $this
     */
    public function setBinaryErrorDetails($var)
    {
        GPBUtil::checkString($var, True);
        $this->binary_error_details = $var;

        return $this;
    }

}

