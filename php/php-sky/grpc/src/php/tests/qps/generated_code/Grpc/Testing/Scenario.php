<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: src/proto/grpc/testing/control.proto

namespace Grpc\Testing;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * A single performance scenario: input to qps_json_driver
 *
 * Generated from protobuf message <code>grpc.testing.Scenario</code>
 */
class Scenario extends \Google\Protobuf\Internal\Message
{
    /**
     * Human readable name for this scenario
     *
     * Generated from protobuf field <code>string name = 1;</code>
     */
    protected $name = '';
    /**
     * Client configuration
     *
     * Generated from protobuf field <code>.grpc.testing.ClientConfig client_config = 2;</code>
     */
    protected $client_config = null;
    /**
     * Number of clients to start for the test
     *
     * Generated from protobuf field <code>int32 num_clients = 3;</code>
     */
    protected $num_clients = 0;
    /**
     * Server configuration
     *
     * Generated from protobuf field <code>.grpc.testing.ServerConfig server_config = 4;</code>
     */
    protected $server_config = null;
    /**
     * Number of servers to start for the test
     *
     * Generated from protobuf field <code>int32 num_servers = 5;</code>
     */
    protected $num_servers = 0;
    /**
     * Warmup period, in seconds
     *
     * Generated from protobuf field <code>int32 warmup_seconds = 6;</code>
     */
    protected $warmup_seconds = 0;
    /**
     * Benchmark time, in seconds
     *
     * Generated from protobuf field <code>int32 benchmark_seconds = 7;</code>
     */
    protected $benchmark_seconds = 0;
    /**
     * Number of workers to spawn locally (usually zero)
     *
     * Generated from protobuf field <code>int32 spawn_local_worker_count = 8;</code>
     */
    protected $spawn_local_worker_count = 0;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $name
     *           Human readable name for this scenario
     *     @type \Grpc\Testing\ClientConfig $client_config
     *           Client configuration
     *     @type int $num_clients
     *           Number of clients to start for the test
     *     @type \Grpc\Testing\ServerConfig $server_config
     *           Server configuration
     *     @type int $num_servers
     *           Number of servers to start for the test
     *     @type int $warmup_seconds
     *           Warmup period, in seconds
     *     @type int $benchmark_seconds
     *           Benchmark time, in seconds
     *     @type int $spawn_local_worker_count
     *           Number of workers to spawn locally (usually zero)
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\Src\Proto\Grpc\Testing\Control::initOnce();
        parent::__construct($data);
    }

    /**
     * Human readable name for this scenario
     *
     * Generated from protobuf field <code>string name = 1;</code>
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Human readable name for this scenario
     *
     * Generated from protobuf field <code>string name = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setName($var)
    {
        GPBUtil::checkString($var, True);
        $this->name = $var;

        return $this;
    }

    /**
     * Client configuration
     *
     * Generated from protobuf field <code>.grpc.testing.ClientConfig client_config = 2;</code>
     * @return \Grpc\Testing\ClientConfig
     */
    public function getClientConfig()
    {
        return $this->client_config;
    }

    /**
     * Client configuration
     *
     * Generated from protobuf field <code>.grpc.testing.ClientConfig client_config = 2;</code>
     * @param \Grpc\Testing\ClientConfig $var
     * @return $this
     */
    public function setClientConfig($var)
    {
        GPBUtil::checkMessage($var, \Grpc\Testing\ClientConfig::class);
        $this->client_config = $var;

        return $this;
    }

    /**
     * Number of clients to start for the test
     *
     * Generated from protobuf field <code>int32 num_clients = 3;</code>
     * @return int
     */
    public function getNumClients()
    {
        return $this->num_clients;
    }

    /**
     * Number of clients to start for the test
     *
     * Generated from protobuf field <code>int32 num_clients = 3;</code>
     * @param int $var
     * @return $this
     */
    public function setNumClients($var)
    {
        GPBUtil::checkInt32($var);
        $this->num_clients = $var;

        return $this;
    }

    /**
     * Server configuration
     *
     * Generated from protobuf field <code>.grpc.testing.ServerConfig server_config = 4;</code>
     * @return \Grpc\Testing\ServerConfig
     */
    public function getServerConfig()
    {
        return $this->server_config;
    }

    /**
     * Server configuration
     *
     * Generated from protobuf field <code>.grpc.testing.ServerConfig server_config = 4;</code>
     * @param \Grpc\Testing\ServerConfig $var
     * @return $this
     */
    public function setServerConfig($var)
    {
        GPBUtil::checkMessage($var, \Grpc\Testing\ServerConfig::class);
        $this->server_config = $var;

        return $this;
    }

    /**
     * Number of servers to start for the test
     *
     * Generated from protobuf field <code>int32 num_servers = 5;</code>
     * @return int
     */
    public function getNumServers()
    {
        return $this->num_servers;
    }

    /**
     * Number of servers to start for the test
     *
     * Generated from protobuf field <code>int32 num_servers = 5;</code>
     * @param int $var
     * @return $this
     */
    public function setNumServers($var)
    {
        GPBUtil::checkInt32($var);
        $this->num_servers = $var;

        return $this;
    }

    /**
     * Warmup period, in seconds
     *
     * Generated from protobuf field <code>int32 warmup_seconds = 6;</code>
     * @return int
     */
    public function getWarmupSeconds()
    {
        return $this->warmup_seconds;
    }

    /**
     * Warmup period, in seconds
     *
     * Generated from protobuf field <code>int32 warmup_seconds = 6;</code>
     * @param int $var
     * @return $this
     */
    public function setWarmupSeconds($var)
    {
        GPBUtil::checkInt32($var);
        $this->warmup_seconds = $var;

        return $this;
    }

    /**
     * Benchmark time, in seconds
     *
     * Generated from protobuf field <code>int32 benchmark_seconds = 7;</code>
     * @return int
     */
    public function getBenchmarkSeconds()
    {
        return $this->benchmark_seconds;
    }

    /**
     * Benchmark time, in seconds
     *
     * Generated from protobuf field <code>int32 benchmark_seconds = 7;</code>
     * @param int $var
     * @return $this
     */
    public function setBenchmarkSeconds($var)
    {
        GPBUtil::checkInt32($var);
        $this->benchmark_seconds = $var;

        return $this;
    }

    /**
     * Number of workers to spawn locally (usually zero)
     *
     * Generated from protobuf field <code>int32 spawn_local_worker_count = 8;</code>
     * @return int
     */
    public function getSpawnLocalWorkerCount()
    {
        return $this->spawn_local_worker_count;
    }

    /**
     * Number of workers to spawn locally (usually zero)
     *
     * Generated from protobuf field <code>int32 spawn_local_worker_count = 8;</code>
     * @param int $var
     * @return $this
     */
    public function setSpawnLocalWorkerCount($var)
    {
        GPBUtil::checkInt32($var);
        $this->spawn_local_worker_count = $var;

        return $this;
    }

}

