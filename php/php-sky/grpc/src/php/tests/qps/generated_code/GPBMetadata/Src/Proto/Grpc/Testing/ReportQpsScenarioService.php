<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: src/proto/grpc/testing/report_qps_scenario_service.proto

namespace GPBMetadata\Src\Proto\Grpc\Testing;

class ReportQpsScenarioService
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        \GPBMetadata\Src\Proto\Grpc\Testing\Control::initOnce();
        $pool->internalAddGeneratedFile(hex2bin(
            "0ab0010a387372632f70726f746f2f677270632f74657374696e672f7265706f72745f7170735f7363656e6172696f5f736572766963652e70726f746f120c677270632e74657374696e67325e0a185265706f72745170735363656e6172696f5365727669636512420a0e5265706f72745363656e6172696f121c2e677270632e74657374696e672e5363656e6172696f526573756c741a122e677270632e74657374696e672e566f6964620670726f746f33"
        ), true);

        static::$is_initialized = true;
    }
}

