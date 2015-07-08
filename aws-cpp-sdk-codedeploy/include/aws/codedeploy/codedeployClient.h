/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codedeploy/model/BatchGetApplicationsResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentsResult.h>
#include <aws/codedeploy/model/BatchGetOnPremisesInstancesResult.h>
#include <aws/codedeploy/model/CreateApplicationResult.h>
#include <aws/codedeploy/model/CreateDeploymentResult.h>
#include <aws/codedeploy/model/CreateDeploymentConfigResult.h>
#include <aws/codedeploy/model/CreateDeploymentGroupResult.h>
#include <aws/codedeploy/model/DeleteDeploymentGroupResult.h>
#include <aws/codedeploy/model/GetApplicationResult.h>
#include <aws/codedeploy/model/GetApplicationRevisionResult.h>
#include <aws/codedeploy/model/GetDeploymentResult.h>
#include <aws/codedeploy/model/GetDeploymentConfigResult.h>
#include <aws/codedeploy/model/GetDeploymentGroupResult.h>
#include <aws/codedeploy/model/GetDeploymentInstanceResult.h>
#include <aws/codedeploy/model/GetOnPremisesInstanceResult.h>
#include <aws/codedeploy/model/ListApplicationRevisionsResult.h>
#include <aws/codedeploy/model/ListApplicationsResult.h>
#include <aws/codedeploy/model/ListDeploymentConfigsResult.h>
#include <aws/codedeploy/model/ListDeploymentGroupsResult.h>
#include <aws/codedeploy/model/ListDeploymentInstancesResult.h>
#include <aws/codedeploy/model/ListDeploymentsResult.h>
#include <aws/codedeploy/model/ListOnPremisesInstancesResult.h>
#include <aws/codedeploy/model/StopDeploymentResult.h>
#include <aws/codedeploy/model/UpdateDeploymentGroupResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <future>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CodeDeploy
{

namespace Model
{
    class AddTagsToOnPremisesInstancesRequest;
    class BatchGetApplicationsRequest;
    class BatchGetDeploymentsRequest;
    class BatchGetOnPremisesInstancesRequest;
    class CreateApplicationRequest;
    class CreateDeploymentRequest;
    class CreateDeploymentConfigRequest;
    class CreateDeploymentGroupRequest;
    class DeleteApplicationRequest;
    class DeleteDeploymentConfigRequest;
    class DeleteDeploymentGroupRequest;
    class DeregisterOnPremisesInstanceRequest;
    class GetApplicationRequest;
    class GetApplicationRevisionRequest;
    class GetDeploymentRequest;
    class GetDeploymentConfigRequest;
    class GetDeploymentGroupRequest;
    class GetDeploymentInstanceRequest;
    class GetOnPremisesInstanceRequest;
    class ListApplicationRevisionsRequest;
    class ListApplicationsRequest;
    class ListDeploymentConfigsRequest;
    class ListDeploymentGroupsRequest;
    class ListDeploymentInstancesRequest;
    class ListDeploymentsRequest;
    class ListOnPremisesInstancesRequest;
    class RegisterApplicationRevisionRequest;
    class RegisterOnPremisesInstanceRequest;
    class RemoveTagsFromOnPremisesInstancesRequest;
    class StopDeploymentRequest;
    class UpdateApplicationRequest;
    class UpdateDeploymentGroupRequest;

  typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> AddTagsToOnPremisesInstancesOutcome;
  typedef Utils::Outcome<BatchGetApplicationsResult, Client::AWSError<CodeDeployErrors>> BatchGetApplicationsOutcome;
  typedef Utils::Outcome<BatchGetDeploymentsResult, Client::AWSError<CodeDeployErrors>> BatchGetDeploymentsOutcome;
  typedef Utils::Outcome<BatchGetOnPremisesInstancesResult, Client::AWSError<CodeDeployErrors>> BatchGetOnPremisesInstancesOutcome;
  typedef Utils::Outcome<CreateApplicationResult, Client::AWSError<CodeDeployErrors>> CreateApplicationOutcome;
  typedef Utils::Outcome<CreateDeploymentResult, Client::AWSError<CodeDeployErrors>> CreateDeploymentOutcome;
  typedef Utils::Outcome<CreateDeploymentConfigResult, Client::AWSError<CodeDeployErrors>> CreateDeploymentConfigOutcome;
  typedef Utils::Outcome<CreateDeploymentGroupResult, Client::AWSError<CodeDeployErrors>> CreateDeploymentGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> DeleteApplicationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> DeleteDeploymentConfigOutcome;
  typedef Utils::Outcome<DeleteDeploymentGroupResult, Client::AWSError<CodeDeployErrors>> DeleteDeploymentGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> DeregisterOnPremisesInstanceOutcome;
  typedef Utils::Outcome<GetApplicationResult, Client::AWSError<CodeDeployErrors>> GetApplicationOutcome;
  typedef Utils::Outcome<GetApplicationRevisionResult, Client::AWSError<CodeDeployErrors>> GetApplicationRevisionOutcome;
  typedef Utils::Outcome<GetDeploymentResult, Client::AWSError<CodeDeployErrors>> GetDeploymentOutcome;
  typedef Utils::Outcome<GetDeploymentConfigResult, Client::AWSError<CodeDeployErrors>> GetDeploymentConfigOutcome;
  typedef Utils::Outcome<GetDeploymentGroupResult, Client::AWSError<CodeDeployErrors>> GetDeploymentGroupOutcome;
  typedef Utils::Outcome<GetDeploymentInstanceResult, Client::AWSError<CodeDeployErrors>> GetDeploymentInstanceOutcome;
  typedef Utils::Outcome<GetOnPremisesInstanceResult, Client::AWSError<CodeDeployErrors>> GetOnPremisesInstanceOutcome;
  typedef Utils::Outcome<ListApplicationRevisionsResult, Client::AWSError<CodeDeployErrors>> ListApplicationRevisionsOutcome;
  typedef Utils::Outcome<ListApplicationsResult, Client::AWSError<CodeDeployErrors>> ListApplicationsOutcome;
  typedef Utils::Outcome<ListDeploymentConfigsResult, Client::AWSError<CodeDeployErrors>> ListDeploymentConfigsOutcome;
  typedef Utils::Outcome<ListDeploymentGroupsResult, Client::AWSError<CodeDeployErrors>> ListDeploymentGroupsOutcome;
  typedef Utils::Outcome<ListDeploymentInstancesResult, Client::AWSError<CodeDeployErrors>> ListDeploymentInstancesOutcome;
  typedef Utils::Outcome<ListDeploymentsResult, Client::AWSError<CodeDeployErrors>> ListDeploymentsOutcome;
  typedef Utils::Outcome<ListOnPremisesInstancesResult, Client::AWSError<CodeDeployErrors>> ListOnPremisesInstancesOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> RegisterApplicationRevisionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> RegisterOnPremisesInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> RemoveTagsFromOnPremisesInstancesOutcome;
  typedef Utils::Outcome<StopDeploymentResult, Client::AWSError<CodeDeployErrors>> StopDeploymentOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CodeDeployErrors>> UpdateApplicationOutcome;
  typedef Utils::Outcome<UpdateDeploymentGroupResult, Client::AWSError<CodeDeployErrors>> UpdateDeploymentGroupOutcome;

  typedef std::future<AddTagsToOnPremisesInstancesOutcome> AddTagsToOnPremisesInstancesOutcomeCallable;
  typedef std::future<BatchGetApplicationsOutcome> BatchGetApplicationsOutcomeCallable;
  typedef std::future<BatchGetDeploymentsOutcome> BatchGetDeploymentsOutcomeCallable;
  typedef std::future<BatchGetOnPremisesInstancesOutcome> BatchGetOnPremisesInstancesOutcomeCallable;
  typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
  typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
  typedef std::future<CreateDeploymentConfigOutcome> CreateDeploymentConfigOutcomeCallable;
  typedef std::future<CreateDeploymentGroupOutcome> CreateDeploymentGroupOutcomeCallable;
  typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
  typedef std::future<DeleteDeploymentConfigOutcome> DeleteDeploymentConfigOutcomeCallable;
  typedef std::future<DeleteDeploymentGroupOutcome> DeleteDeploymentGroupOutcomeCallable;
  typedef std::future<DeregisterOnPremisesInstanceOutcome> DeregisterOnPremisesInstanceOutcomeCallable;
  typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
  typedef std::future<GetApplicationRevisionOutcome> GetApplicationRevisionOutcomeCallable;
  typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
  typedef std::future<GetDeploymentConfigOutcome> GetDeploymentConfigOutcomeCallable;
  typedef std::future<GetDeploymentGroupOutcome> GetDeploymentGroupOutcomeCallable;
  typedef std::future<GetDeploymentInstanceOutcome> GetDeploymentInstanceOutcomeCallable;
  typedef std::future<GetOnPremisesInstanceOutcome> GetOnPremisesInstanceOutcomeCallable;
  typedef std::future<ListApplicationRevisionsOutcome> ListApplicationRevisionsOutcomeCallable;
  typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
  typedef std::future<ListDeploymentConfigsOutcome> ListDeploymentConfigsOutcomeCallable;
  typedef std::future<ListDeploymentGroupsOutcome> ListDeploymentGroupsOutcomeCallable;
  typedef std::future<ListDeploymentInstancesOutcome> ListDeploymentInstancesOutcomeCallable;
  typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
  typedef std::future<ListOnPremisesInstancesOutcome> ListOnPremisesInstancesOutcomeCallable;
  typedef std::future<RegisterApplicationRevisionOutcome> RegisterApplicationRevisionOutcomeCallable;
  typedef std::future<RegisterOnPremisesInstanceOutcome> RegisterOnPremisesInstanceOutcomeCallable;
  typedef std::future<RemoveTagsFromOnPremisesInstancesOutcome> RemoveTagsFromOnPremisesInstancesOutcomeCallable;
  typedef std::future<StopDeploymentOutcome> StopDeploymentOutcomeCallable;
  typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
  typedef std::future<UpdateDeploymentGroupOutcome> UpdateDeploymentGroupOutcomeCallable;
} // namespace Model

    class CodeDeployClient;

  typedef Aws::Utils::Event<CodeDeployClient, const Model::AddTagsToOnPremisesInstancesRequest&, const Model::AddTagsToOnPremisesInstancesOutcome&, const Aws::Client::AsyncCallerContext*> AddTagsToOnPremisesInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::BatchGetApplicationsRequest&, const Model::BatchGetApplicationsOutcome&, const Aws::Client::AsyncCallerContext*> BatchGetApplicationsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::BatchGetDeploymentsRequest&, const Model::BatchGetDeploymentsOutcome&, const Aws::Client::AsyncCallerContext*> BatchGetDeploymentsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::BatchGetOnPremisesInstancesRequest&, const Model::BatchGetOnPremisesInstancesOutcome&, const Aws::Client::AsyncCallerContext*> BatchGetOnPremisesInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const Aws::Client::AsyncCallerContext*> CreateApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const Aws::Client::AsyncCallerContext*> CreateDeploymentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::CreateDeploymentConfigRequest&, const Model::CreateDeploymentConfigOutcome&, const Aws::Client::AsyncCallerContext*> CreateDeploymentConfigOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::CreateDeploymentGroupRequest&, const Model::CreateDeploymentGroupOutcome&, const Aws::Client::AsyncCallerContext*> CreateDeploymentGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const Aws::Client::AsyncCallerContext*> DeleteApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::DeleteDeploymentConfigRequest&, const Model::DeleteDeploymentConfigOutcome&, const Aws::Client::AsyncCallerContext*> DeleteDeploymentConfigOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::DeleteDeploymentGroupRequest&, const Model::DeleteDeploymentGroupOutcome&, const Aws::Client::AsyncCallerContext*> DeleteDeploymentGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::DeregisterOnPremisesInstanceRequest&, const Model::DeregisterOnPremisesInstanceOutcome&, const Aws::Client::AsyncCallerContext*> DeregisterOnPremisesInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const Aws::Client::AsyncCallerContext*> GetApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::GetApplicationRevisionRequest&, const Model::GetApplicationRevisionOutcome&, const Aws::Client::AsyncCallerContext*> GetApplicationRevisionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const Aws::Client::AsyncCallerContext*> GetDeploymentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::GetDeploymentConfigRequest&, const Model::GetDeploymentConfigOutcome&, const Aws::Client::AsyncCallerContext*> GetDeploymentConfigOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::GetDeploymentGroupRequest&, const Model::GetDeploymentGroupOutcome&, const Aws::Client::AsyncCallerContext*> GetDeploymentGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::GetDeploymentInstanceRequest&, const Model::GetDeploymentInstanceOutcome&, const Aws::Client::AsyncCallerContext*> GetDeploymentInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::GetOnPremisesInstanceRequest&, const Model::GetOnPremisesInstanceOutcome&, const Aws::Client::AsyncCallerContext*> GetOnPremisesInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::ListApplicationRevisionsRequest&, const Model::ListApplicationRevisionsOutcome&, const Aws::Client::AsyncCallerContext*> ListApplicationRevisionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const Aws::Client::AsyncCallerContext*> ListApplicationsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::ListDeploymentConfigsRequest&, const Model::ListDeploymentConfigsOutcome&, const Aws::Client::AsyncCallerContext*> ListDeploymentConfigsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::ListDeploymentGroupsRequest&, const Model::ListDeploymentGroupsOutcome&, const Aws::Client::AsyncCallerContext*> ListDeploymentGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::ListDeploymentInstancesRequest&, const Model::ListDeploymentInstancesOutcome&, const Aws::Client::AsyncCallerContext*> ListDeploymentInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const Aws::Client::AsyncCallerContext*> ListDeploymentsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::ListOnPremisesInstancesRequest&, const Model::ListOnPremisesInstancesOutcome&, const Aws::Client::AsyncCallerContext*> ListOnPremisesInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::RegisterApplicationRevisionRequest&, const Model::RegisterApplicationRevisionOutcome&, const Aws::Client::AsyncCallerContext*> RegisterApplicationRevisionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::RegisterOnPremisesInstanceRequest&, const Model::RegisterOnPremisesInstanceOutcome&, const Aws::Client::AsyncCallerContext*> RegisterOnPremisesInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::RemoveTagsFromOnPremisesInstancesRequest&, const Model::RemoveTagsFromOnPremisesInstancesOutcome&, const Aws::Client::AsyncCallerContext*> RemoveTagsFromOnPremisesInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::StopDeploymentRequest&, const Model::StopDeploymentOutcome&, const Aws::Client::AsyncCallerContext*> StopDeploymentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const Aws::Client::AsyncCallerContext*> UpdateApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CodeDeployClient, const Model::UpdateDeploymentGroupRequest&, const Model::UpdateDeploymentGroupOutcome&, const Aws::Client::AsyncCallerContext*> UpdateDeploymentGroupOutcomeReceivedEvent;

  /*
    <fullname>AWS CodeDeploy</fullname> <b>Overview</b> <p>This is the AWS CodeDeploy API Reference. This guide provides descriptions of the AWS CodeDeploy APIs. For additional information, see the <a href="http://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy User Guide</a>.</p> <b>Using the APIs</b> <p>You can use the AWS CodeDeploy APIs to work with the following items:</p> <ul> <li> <p>Applications are unique identifiers that AWS CodeDeploy uses to ensure that the correct combinations of revisions, deployment configurations, and deployment groups are being referenced during deployments.</p> <p>You can use the AWS CodeDeploy APIs to create, delete, get, list, and update applications.</p> </li> <li> <p>Deployment configurations are sets of deployment rules and deployment success and failure conditions that AWS CodeDeploy uses during deployments.</p> <p>You can use the AWS CodeDeploy APIs to create, delete, get, and list deployment configurations.</p> </li> <li> <p>Deployment groups are groups of instances to which application revisions can be deployed.</p> <p>You can use the AWS CodeDeploy APIs to create, delete, get, list, and update deployment groups.</p> </li> <li> <p>Instances represent Amazon EC2 instances to which application revisions are deployed. Instances are identified by their Amazon EC2 tags or Auto Scaling group names. Instances belong to deployment groups.</p> <p>You can use the AWS CodeDeploy APIs to get and list instances.</p> </li> <li> <p>Deployments represent the process of deploying revisions to instances.</p> <p>You can use the AWS CodeDeploy APIs to create, get, list, and stop deployments.</p> </li> <li> <p>Application revisions are archive files that are stored in Amazon S3 buckets or GitHub repositories. These revisions contain source content (such as source code, web pages, executable files, any deployment scripts, and similar) along with an Application Specification file (AppSpec file). (The AppSpec file is unique to AWS CodeDeploy; it defines a series of deployment actions that you want AWS CodeDeploy to execute.) An application revision is uniquely identified by its Amazon S3 object key and its ETag, version, or both (for application revisions that are stored in Amazon S3 buckets) or by its repository name and commit ID (for applications revisions that are stored in GitHub repositories). Application revisions are deployed through deployment groups.</p> <p>You can use the AWS CodeDeploy APIs to get, list, and register application revisions.</p> </li> </ul>
  */
  class AWS_CODEDEPLOY_API CodeDeployClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      CodeDeployClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      CodeDeployClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      CodeDeployClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~CodeDeployClient();

     /*
       <p>Adds tags to on-premises instances.</p>
     */
     Model::AddTagsToOnPremisesInstancesOutcome AddTagsToOnPremisesInstances(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

     /*
       <p>Adds tags to on-premises instances.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddTagsToOnPremisesInstancesOutcomeCallable AddTagsToOnPremisesInstancesCallable(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

     /*
       <p>Adds tags to on-premises instances.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddTagsToOnPremisesInstancesAsync(const Model::AddTagsToOnPremisesInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about one or more applications.</p>
     */
     Model::BatchGetApplicationsOutcome BatchGetApplications(const Model::BatchGetApplicationsRequest& request) const;

     /*
       <p>Gets information about one or more applications.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::BatchGetApplicationsOutcomeCallable BatchGetApplicationsCallable(const Model::BatchGetApplicationsRequest& request) const;

     /*
       <p>Gets information about one or more applications.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void BatchGetApplicationsAsync(const Model::BatchGetApplicationsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about one or more deployments.</p>
     */
     Model::BatchGetDeploymentsOutcome BatchGetDeployments(const Model::BatchGetDeploymentsRequest& request) const;

     /*
       <p>Gets information about one or more deployments.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::BatchGetDeploymentsOutcomeCallable BatchGetDeploymentsCallable(const Model::BatchGetDeploymentsRequest& request) const;

     /*
       <p>Gets information about one or more deployments.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void BatchGetDeploymentsAsync(const Model::BatchGetDeploymentsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about one or more on-premises instances.</p>
     */
     Model::BatchGetOnPremisesInstancesOutcome BatchGetOnPremisesInstances(const Model::BatchGetOnPremisesInstancesRequest& request) const;

     /*
       <p>Gets information about one or more on-premises instances.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::BatchGetOnPremisesInstancesOutcomeCallable BatchGetOnPremisesInstancesCallable(const Model::BatchGetOnPremisesInstancesRequest& request) const;

     /*
       <p>Gets information about one or more on-premises instances.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void BatchGetOnPremisesInstancesAsync(const Model::BatchGetOnPremisesInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates a new application.</p>
     */
     Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

     /*
       <p>Creates a new application.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

     /*
       <p>Creates a new application.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deploys an application revision through the specified deployment group.</p>
     */
     Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

     /*
       <p>Deploys an application revision through the specified deployment group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

     /*
       <p>Deploys an application revision through the specified deployment group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates a new deployment configuration.</p>
     */
     Model::CreateDeploymentConfigOutcome CreateDeploymentConfig(const Model::CreateDeploymentConfigRequest& request) const;

     /*
       <p>Creates a new deployment configuration.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDeploymentConfigOutcomeCallable CreateDeploymentConfigCallable(const Model::CreateDeploymentConfigRequest& request) const;

     /*
       <p>Creates a new deployment configuration.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDeploymentConfigAsync(const Model::CreateDeploymentConfigRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates a new deployment group for application revisions to be deployed to.</p>
     */
     Model::CreateDeploymentGroupOutcome CreateDeploymentGroup(const Model::CreateDeploymentGroupRequest& request) const;

     /*
       <p>Creates a new deployment group for application revisions to be deployed to.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDeploymentGroupOutcomeCallable CreateDeploymentGroupCallable(const Model::CreateDeploymentGroupRequest& request) const;

     /*
       <p>Creates a new deployment group for application revisions to be deployed to.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDeploymentGroupAsync(const Model::CreateDeploymentGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes an application.</p>
     */
     Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

     /*
       <p>Deletes an application.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

     /*
       <p>Deletes an application.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes a deployment configuration.</p> <note>A deployment configuration cannot be deleted if it is currently in use. Also, predefined configurations cannot be deleted.</note>
     */
     Model::DeleteDeploymentConfigOutcome DeleteDeploymentConfig(const Model::DeleteDeploymentConfigRequest& request) const;

     /*
       <p>Deletes a deployment configuration.</p> <note>A deployment configuration cannot be deleted if it is currently in use. Also, predefined configurations cannot be deleted.</note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDeploymentConfigOutcomeCallable DeleteDeploymentConfigCallable(const Model::DeleteDeploymentConfigRequest& request) const;

     /*
       <p>Deletes a deployment configuration.</p> <note>A deployment configuration cannot be deleted if it is currently in use. Also, predefined configurations cannot be deleted.</note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDeploymentConfigAsync(const Model::DeleteDeploymentConfigRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes a deployment group.</p>
     */
     Model::DeleteDeploymentGroupOutcome DeleteDeploymentGroup(const Model::DeleteDeploymentGroupRequest& request) const;

     /*
       <p>Deletes a deployment group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDeploymentGroupOutcomeCallable DeleteDeploymentGroupCallable(const Model::DeleteDeploymentGroupRequest& request) const;

     /*
       <p>Deletes a deployment group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDeploymentGroupAsync(const Model::DeleteDeploymentGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deregisters an on-premises instance.</p>
     */
     Model::DeregisterOnPremisesInstanceOutcome DeregisterOnPremisesInstance(const Model::DeregisterOnPremisesInstanceRequest& request) const;

     /*
       <p>Deregisters an on-premises instance.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeregisterOnPremisesInstanceOutcomeCallable DeregisterOnPremisesInstanceCallable(const Model::DeregisterOnPremisesInstanceRequest& request) const;

     /*
       <p>Deregisters an on-premises instance.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeregisterOnPremisesInstanceAsync(const Model::DeregisterOnPremisesInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about an application.</p>
     */
     Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

     /*
       <p>Gets information about an application.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

     /*
       <p>Gets information about an application.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetApplicationAsync(const Model::GetApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about an application revision.</p>
     */
     Model::GetApplicationRevisionOutcome GetApplicationRevision(const Model::GetApplicationRevisionRequest& request) const;

     /*
       <p>Gets information about an application revision.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetApplicationRevisionOutcomeCallable GetApplicationRevisionCallable(const Model::GetApplicationRevisionRequest& request) const;

     /*
       <p>Gets information about an application revision.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetApplicationRevisionAsync(const Model::GetApplicationRevisionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about a deployment.</p>
     */
     Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

     /*
       <p>Gets information about a deployment.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

     /*
       <p>Gets information about a deployment.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about a deployment configuration.</p>
     */
     Model::GetDeploymentConfigOutcome GetDeploymentConfig(const Model::GetDeploymentConfigRequest& request) const;

     /*
       <p>Gets information about a deployment configuration.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetDeploymentConfigOutcomeCallable GetDeploymentConfigCallable(const Model::GetDeploymentConfigRequest& request) const;

     /*
       <p>Gets information about a deployment configuration.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetDeploymentConfigAsync(const Model::GetDeploymentConfigRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about a deployment group.</p>
     */
     Model::GetDeploymentGroupOutcome GetDeploymentGroup(const Model::GetDeploymentGroupRequest& request) const;

     /*
       <p>Gets information about a deployment group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetDeploymentGroupOutcomeCallable GetDeploymentGroupCallable(const Model::GetDeploymentGroupRequest& request) const;

     /*
       <p>Gets information about a deployment group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetDeploymentGroupAsync(const Model::GetDeploymentGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about an instance as part of a deployment.</p>
     */
     Model::GetDeploymentInstanceOutcome GetDeploymentInstance(const Model::GetDeploymentInstanceRequest& request) const;

     /*
       <p>Gets information about an instance as part of a deployment.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetDeploymentInstanceOutcomeCallable GetDeploymentInstanceCallable(const Model::GetDeploymentInstanceRequest& request) const;

     /*
       <p>Gets information about an instance as part of a deployment.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetDeploymentInstanceAsync(const Model::GetDeploymentInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets information about an on-premises instance.</p>
     */
     Model::GetOnPremisesInstanceOutcome GetOnPremisesInstance(const Model::GetOnPremisesInstanceRequest& request) const;

     /*
       <p>Gets information about an on-premises instance.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetOnPremisesInstanceOutcomeCallable GetOnPremisesInstanceCallable(const Model::GetOnPremisesInstanceRequest& request) const;

     /*
       <p>Gets information about an on-premises instance.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetOnPremisesInstanceAsync(const Model::GetOnPremisesInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists information about revisions for an application.</p>
     */
     Model::ListApplicationRevisionsOutcome ListApplicationRevisions(const Model::ListApplicationRevisionsRequest& request) const;

     /*
       <p>Lists information about revisions for an application.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListApplicationRevisionsOutcomeCallable ListApplicationRevisionsCallable(const Model::ListApplicationRevisionsRequest& request) const;

     /*
       <p>Lists information about revisions for an application.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListApplicationRevisionsAsync(const Model::ListApplicationRevisionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the applications registered with the applicable IAM user or AWS account.</p>
     */
     Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

     /*
       <p>Lists the applications registered with the applicable IAM user or AWS account.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

     /*
       <p>Lists the applications registered with the applicable IAM user or AWS account.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the deployment configurations with the applicable IAM user or AWS account.</p>
     */
     Model::ListDeploymentConfigsOutcome ListDeploymentConfigs(const Model::ListDeploymentConfigsRequest& request) const;

     /*
       <p>Lists the deployment configurations with the applicable IAM user or AWS account.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListDeploymentConfigsOutcomeCallable ListDeploymentConfigsCallable(const Model::ListDeploymentConfigsRequest& request) const;

     /*
       <p>Lists the deployment configurations with the applicable IAM user or AWS account.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListDeploymentConfigsAsync(const Model::ListDeploymentConfigsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the deployment groups for an application registered with the applicable IAM user or AWS account.</p>
     */
     Model::ListDeploymentGroupsOutcome ListDeploymentGroups(const Model::ListDeploymentGroupsRequest& request) const;

     /*
       <p>Lists the deployment groups for an application registered with the applicable IAM user or AWS account.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListDeploymentGroupsOutcomeCallable ListDeploymentGroupsCallable(const Model::ListDeploymentGroupsRequest& request) const;

     /*
       <p>Lists the deployment groups for an application registered with the applicable IAM user or AWS account.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListDeploymentGroupsAsync(const Model::ListDeploymentGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the instances for a deployment associated with the applicable IAM user or AWS account.</p>
     */
     Model::ListDeploymentInstancesOutcome ListDeploymentInstances(const Model::ListDeploymentInstancesRequest& request) const;

     /*
       <p>Lists the instances for a deployment associated with the applicable IAM user or AWS account.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListDeploymentInstancesOutcomeCallable ListDeploymentInstancesCallable(const Model::ListDeploymentInstancesRequest& request) const;

     /*
       <p>Lists the instances for a deployment associated with the applicable IAM user or AWS account.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListDeploymentInstancesAsync(const Model::ListDeploymentInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the deployments within a deployment group for an application registered with the applicable IAM user or AWS account.</p>
     */
     Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

     /*
       <p>Lists the deployments within a deployment group for an application registered with the applicable IAM user or AWS account.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

     /*
       <p>Lists the deployments within a deployment group for an application registered with the applicable IAM user or AWS account.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets a list of one or more on-premises instance names.</p> <p>Unless otherwise specified, both registered and deregistered on-premises instance names will be listed. To list only registered or deregistered on-premises instance names, use the registration status parameter.</p>
     */
     Model::ListOnPremisesInstancesOutcome ListOnPremisesInstances(const Model::ListOnPremisesInstancesRequest& request) const;

     /*
       <p>Gets a list of one or more on-premises instance names.</p> <p>Unless otherwise specified, both registered and deregistered on-premises instance names will be listed. To list only registered or deregistered on-premises instance names, use the registration status parameter.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListOnPremisesInstancesOutcomeCallable ListOnPremisesInstancesCallable(const Model::ListOnPremisesInstancesRequest& request) const;

     /*
       <p>Gets a list of one or more on-premises instance names.</p> <p>Unless otherwise specified, both registered and deregistered on-premises instance names will be listed. To list only registered or deregistered on-premises instance names, use the registration status parameter.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListOnPremisesInstancesAsync(const Model::ListOnPremisesInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Registers with AWS CodeDeploy a revision for the specified application.</p>
     */
     Model::RegisterApplicationRevisionOutcome RegisterApplicationRevision(const Model::RegisterApplicationRevisionRequest& request) const;

     /*
       <p>Registers with AWS CodeDeploy a revision for the specified application.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterApplicationRevisionOutcomeCallable RegisterApplicationRevisionCallable(const Model::RegisterApplicationRevisionRequest& request) const;

     /*
       <p>Registers with AWS CodeDeploy a revision for the specified application.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterApplicationRevisionAsync(const Model::RegisterApplicationRevisionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Registers an on-premises instance.</p>
     */
     Model::RegisterOnPremisesInstanceOutcome RegisterOnPremisesInstance(const Model::RegisterOnPremisesInstanceRequest& request) const;

     /*
       <p>Registers an on-premises instance.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterOnPremisesInstanceOutcomeCallable RegisterOnPremisesInstanceCallable(const Model::RegisterOnPremisesInstanceRequest& request) const;

     /*
       <p>Registers an on-premises instance.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterOnPremisesInstanceAsync(const Model::RegisterOnPremisesInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Removes one or more tags from one or more on-premises instances.</p>
     */
     Model::RemoveTagsFromOnPremisesInstancesOutcome RemoveTagsFromOnPremisesInstances(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

     /*
       <p>Removes one or more tags from one or more on-premises instances.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemoveTagsFromOnPremisesInstancesOutcomeCallable RemoveTagsFromOnPremisesInstancesCallable(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

     /*
       <p>Removes one or more tags from one or more on-premises instances.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemoveTagsFromOnPremisesInstancesAsync(const Model::RemoveTagsFromOnPremisesInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Attempts to stop an ongoing deployment.</p>
     */
     Model::StopDeploymentOutcome StopDeployment(const Model::StopDeploymentRequest& request) const;

     /*
       <p>Attempts to stop an ongoing deployment.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::StopDeploymentOutcomeCallable StopDeploymentCallable(const Model::StopDeploymentRequest& request) const;

     /*
       <p>Attempts to stop an ongoing deployment.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void StopDeploymentAsync(const Model::StopDeploymentRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Changes an existing application's name.</p>
     */
     Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

     /*
       <p>Changes an existing application's name.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

     /*
       <p>Changes an existing application's name.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Changes information about an existing deployment group.</p>
     */
     Model::UpdateDeploymentGroupOutcome UpdateDeploymentGroup(const Model::UpdateDeploymentGroupRequest& request) const;

     /*
       <p>Changes information about an existing deployment group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateDeploymentGroupOutcomeCallable UpdateDeploymentGroupCallable(const Model::UpdateDeploymentGroupRequest& request) const;

     /*
       <p>Changes information about an existing deployment group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateDeploymentGroupAsync(const Model::UpdateDeploymentGroupRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for AddTagsToOnPremisesInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use AddTagsToOnPremisesInstancesAsync.
    */
    inline void RegisterAddTagsToOnPremisesInstancesOutcomeReceivedHandler(const AddTagsToOnPremisesInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddTagsToOnPremisesInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddTagsToOnPremisesInstances.
    */
    inline void ClearAllAddTagsToOnPremisesInstancesOutcomeReceivedHandlers()
    {
      m_onAddTagsToOnPremisesInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for BatchGetApplicationsAsync to call upon completion to the handler chain. You need to call this to
    * use BatchGetApplicationsAsync.
    */
    inline void RegisterBatchGetApplicationsOutcomeReceivedHandler(const BatchGetApplicationsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onBatchGetApplicationsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for BatchGetApplications.
    */
    inline void ClearAllBatchGetApplicationsOutcomeReceivedHandlers()
    {
      m_onBatchGetApplicationsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for BatchGetDeploymentsAsync to call upon completion to the handler chain. You need to call this to
    * use BatchGetDeploymentsAsync.
    */
    inline void RegisterBatchGetDeploymentsOutcomeReceivedHandler(const BatchGetDeploymentsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onBatchGetDeploymentsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for BatchGetDeployments.
    */
    inline void ClearAllBatchGetDeploymentsOutcomeReceivedHandlers()
    {
      m_onBatchGetDeploymentsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for BatchGetOnPremisesInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use BatchGetOnPremisesInstancesAsync.
    */
    inline void RegisterBatchGetOnPremisesInstancesOutcomeReceivedHandler(const BatchGetOnPremisesInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onBatchGetOnPremisesInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for BatchGetOnPremisesInstances.
    */
    inline void ClearAllBatchGetOnPremisesInstancesOutcomeReceivedHandlers()
    {
      m_onBatchGetOnPremisesInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use CreateApplicationAsync.
    */
    inline void RegisterCreateApplicationOutcomeReceivedHandler(const CreateApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateApplication.
    */
    inline void ClearAllCreateApplicationOutcomeReceivedHandlers()
    {
      m_onCreateApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDeploymentAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDeploymentAsync.
    */
    inline void RegisterCreateDeploymentOutcomeReceivedHandler(const CreateDeploymentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDeploymentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDeployment.
    */
    inline void ClearAllCreateDeploymentOutcomeReceivedHandlers()
    {
      m_onCreateDeploymentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDeploymentConfigAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDeploymentConfigAsync.
    */
    inline void RegisterCreateDeploymentConfigOutcomeReceivedHandler(const CreateDeploymentConfigOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDeploymentConfigOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDeploymentConfig.
    */
    inline void ClearAllCreateDeploymentConfigOutcomeReceivedHandlers()
    {
      m_onCreateDeploymentConfigOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDeploymentGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDeploymentGroupAsync.
    */
    inline void RegisterCreateDeploymentGroupOutcomeReceivedHandler(const CreateDeploymentGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDeploymentGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDeploymentGroup.
    */
    inline void ClearAllCreateDeploymentGroupOutcomeReceivedHandlers()
    {
      m_onCreateDeploymentGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteApplicationAsync.
    */
    inline void RegisterDeleteApplicationOutcomeReceivedHandler(const DeleteApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteApplication.
    */
    inline void ClearAllDeleteApplicationOutcomeReceivedHandlers()
    {
      m_onDeleteApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDeploymentConfigAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteDeploymentConfigAsync.
    */
    inline void RegisterDeleteDeploymentConfigOutcomeReceivedHandler(const DeleteDeploymentConfigOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDeploymentConfigOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDeploymentConfig.
    */
    inline void ClearAllDeleteDeploymentConfigOutcomeReceivedHandlers()
    {
      m_onDeleteDeploymentConfigOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDeploymentGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteDeploymentGroupAsync.
    */
    inline void RegisterDeleteDeploymentGroupOutcomeReceivedHandler(const DeleteDeploymentGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDeploymentGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDeploymentGroup.
    */
    inline void ClearAllDeleteDeploymentGroupOutcomeReceivedHandlers()
    {
      m_onDeleteDeploymentGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeregisterOnPremisesInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use DeregisterOnPremisesInstanceAsync.
    */
    inline void RegisterDeregisterOnPremisesInstanceOutcomeReceivedHandler(const DeregisterOnPremisesInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeregisterOnPremisesInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeregisterOnPremisesInstance.
    */
    inline void ClearAllDeregisterOnPremisesInstanceOutcomeReceivedHandlers()
    {
      m_onDeregisterOnPremisesInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use GetApplicationAsync.
    */
    inline void RegisterGetApplicationOutcomeReceivedHandler(const GetApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetApplication.
    */
    inline void ClearAllGetApplicationOutcomeReceivedHandlers()
    {
      m_onGetApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetApplicationRevisionAsync to call upon completion to the handler chain. You need to call this to
    * use GetApplicationRevisionAsync.
    */
    inline void RegisterGetApplicationRevisionOutcomeReceivedHandler(const GetApplicationRevisionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetApplicationRevisionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetApplicationRevision.
    */
    inline void ClearAllGetApplicationRevisionOutcomeReceivedHandlers()
    {
      m_onGetApplicationRevisionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetDeploymentAsync to call upon completion to the handler chain. You need to call this to
    * use GetDeploymentAsync.
    */
    inline void RegisterGetDeploymentOutcomeReceivedHandler(const GetDeploymentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetDeploymentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetDeployment.
    */
    inline void ClearAllGetDeploymentOutcomeReceivedHandlers()
    {
      m_onGetDeploymentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetDeploymentConfigAsync to call upon completion to the handler chain. You need to call this to
    * use GetDeploymentConfigAsync.
    */
    inline void RegisterGetDeploymentConfigOutcomeReceivedHandler(const GetDeploymentConfigOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetDeploymentConfigOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetDeploymentConfig.
    */
    inline void ClearAllGetDeploymentConfigOutcomeReceivedHandlers()
    {
      m_onGetDeploymentConfigOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetDeploymentGroupAsync to call upon completion to the handler chain. You need to call this to
    * use GetDeploymentGroupAsync.
    */
    inline void RegisterGetDeploymentGroupOutcomeReceivedHandler(const GetDeploymentGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetDeploymentGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetDeploymentGroup.
    */
    inline void ClearAllGetDeploymentGroupOutcomeReceivedHandlers()
    {
      m_onGetDeploymentGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetDeploymentInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use GetDeploymentInstanceAsync.
    */
    inline void RegisterGetDeploymentInstanceOutcomeReceivedHandler(const GetDeploymentInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetDeploymentInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetDeploymentInstance.
    */
    inline void ClearAllGetDeploymentInstanceOutcomeReceivedHandlers()
    {
      m_onGetDeploymentInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetOnPremisesInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use GetOnPremisesInstanceAsync.
    */
    inline void RegisterGetOnPremisesInstanceOutcomeReceivedHandler(const GetOnPremisesInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetOnPremisesInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetOnPremisesInstance.
    */
    inline void ClearAllGetOnPremisesInstanceOutcomeReceivedHandlers()
    {
      m_onGetOnPremisesInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListApplicationRevisionsAsync to call upon completion to the handler chain. You need to call this to
    * use ListApplicationRevisionsAsync.
    */
    inline void RegisterListApplicationRevisionsOutcomeReceivedHandler(const ListApplicationRevisionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListApplicationRevisionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListApplicationRevisions.
    */
    inline void ClearAllListApplicationRevisionsOutcomeReceivedHandlers()
    {
      m_onListApplicationRevisionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListApplicationsAsync to call upon completion to the handler chain. You need to call this to
    * use ListApplicationsAsync.
    */
    inline void RegisterListApplicationsOutcomeReceivedHandler(const ListApplicationsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListApplicationsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListApplications.
    */
    inline void ClearAllListApplicationsOutcomeReceivedHandlers()
    {
      m_onListApplicationsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListDeploymentConfigsAsync to call upon completion to the handler chain. You need to call this to
    * use ListDeploymentConfigsAsync.
    */
    inline void RegisterListDeploymentConfigsOutcomeReceivedHandler(const ListDeploymentConfigsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListDeploymentConfigsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListDeploymentConfigs.
    */
    inline void ClearAllListDeploymentConfigsOutcomeReceivedHandlers()
    {
      m_onListDeploymentConfigsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListDeploymentGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use ListDeploymentGroupsAsync.
    */
    inline void RegisterListDeploymentGroupsOutcomeReceivedHandler(const ListDeploymentGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListDeploymentGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListDeploymentGroups.
    */
    inline void ClearAllListDeploymentGroupsOutcomeReceivedHandlers()
    {
      m_onListDeploymentGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListDeploymentInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use ListDeploymentInstancesAsync.
    */
    inline void RegisterListDeploymentInstancesOutcomeReceivedHandler(const ListDeploymentInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListDeploymentInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListDeploymentInstances.
    */
    inline void ClearAllListDeploymentInstancesOutcomeReceivedHandlers()
    {
      m_onListDeploymentInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListDeploymentsAsync to call upon completion to the handler chain. You need to call this to
    * use ListDeploymentsAsync.
    */
    inline void RegisterListDeploymentsOutcomeReceivedHandler(const ListDeploymentsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListDeploymentsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListDeployments.
    */
    inline void ClearAllListDeploymentsOutcomeReceivedHandlers()
    {
      m_onListDeploymentsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListOnPremisesInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use ListOnPremisesInstancesAsync.
    */
    inline void RegisterListOnPremisesInstancesOutcomeReceivedHandler(const ListOnPremisesInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListOnPremisesInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListOnPremisesInstances.
    */
    inline void ClearAllListOnPremisesInstancesOutcomeReceivedHandlers()
    {
      m_onListOnPremisesInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterApplicationRevisionAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterApplicationRevisionAsync.
    */
    inline void RegisterRegisterApplicationRevisionOutcomeReceivedHandler(const RegisterApplicationRevisionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterApplicationRevisionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterApplicationRevision.
    */
    inline void ClearAllRegisterApplicationRevisionOutcomeReceivedHandlers()
    {
      m_onRegisterApplicationRevisionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterOnPremisesInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterOnPremisesInstanceAsync.
    */
    inline void RegisterRegisterOnPremisesInstanceOutcomeReceivedHandler(const RegisterOnPremisesInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterOnPremisesInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterOnPremisesInstance.
    */
    inline void ClearAllRegisterOnPremisesInstanceOutcomeReceivedHandlers()
    {
      m_onRegisterOnPremisesInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemoveTagsFromOnPremisesInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use RemoveTagsFromOnPremisesInstancesAsync.
    */
    inline void RegisterRemoveTagsFromOnPremisesInstancesOutcomeReceivedHandler(const RemoveTagsFromOnPremisesInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemoveTagsFromOnPremisesInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemoveTagsFromOnPremisesInstances.
    */
    inline void ClearAllRemoveTagsFromOnPremisesInstancesOutcomeReceivedHandlers()
    {
      m_onRemoveTagsFromOnPremisesInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for StopDeploymentAsync to call upon completion to the handler chain. You need to call this to
    * use StopDeploymentAsync.
    */
    inline void RegisterStopDeploymentOutcomeReceivedHandler(const StopDeploymentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onStopDeploymentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for StopDeployment.
    */
    inline void ClearAllStopDeploymentOutcomeReceivedHandlers()
    {
      m_onStopDeploymentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateApplicationAsync.
    */
    inline void RegisterUpdateApplicationOutcomeReceivedHandler(const UpdateApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateApplication.
    */
    inline void ClearAllUpdateApplicationOutcomeReceivedHandlers()
    {
      m_onUpdateApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateDeploymentGroupAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateDeploymentGroupAsync.
    */
    inline void RegisterUpdateDeploymentGroupOutcomeReceivedHandler(const UpdateDeploymentGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateDeploymentGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateDeploymentGroup.
    */
    inline void ClearAllUpdateDeploymentGroupOutcomeReceivedHandlers()
    {
      m_onUpdateDeploymentGroupOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AddTagsToOnPremisesInstancesAsyncHelper(const Model::AddTagsToOnPremisesInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void BatchGetApplicationsAsyncHelper(const Model::BatchGetApplicationsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void BatchGetDeploymentsAsyncHelper(const Model::BatchGetDeploymentsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void BatchGetOnPremisesInstancesAsyncHelper(const Model::BatchGetOnPremisesInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDeploymentConfigAsyncHelper(const Model::CreateDeploymentConfigRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDeploymentGroupAsyncHelper(const Model::CreateDeploymentGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteDeploymentConfigAsyncHelper(const Model::DeleteDeploymentConfigRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteDeploymentGroupAsyncHelper(const Model::DeleteDeploymentGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeregisterOnPremisesInstanceAsyncHelper(const Model::DeregisterOnPremisesInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetApplicationAsyncHelper(const Model::GetApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetApplicationRevisionAsyncHelper(const Model::GetApplicationRevisionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetDeploymentAsyncHelper(const Model::GetDeploymentRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetDeploymentConfigAsyncHelper(const Model::GetDeploymentConfigRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetDeploymentGroupAsyncHelper(const Model::GetDeploymentGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetDeploymentInstanceAsyncHelper(const Model::GetDeploymentInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetOnPremisesInstanceAsyncHelper(const Model::GetOnPremisesInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListApplicationRevisionsAsyncHelper(const Model::ListApplicationRevisionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListDeploymentConfigsAsyncHelper(const Model::ListDeploymentConfigsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListDeploymentGroupsAsyncHelper(const Model::ListDeploymentGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListDeploymentInstancesAsyncHelper(const Model::ListDeploymentInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListDeploymentsAsyncHelper(const Model::ListDeploymentsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListOnPremisesInstancesAsyncHelper(const Model::ListOnPremisesInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RegisterApplicationRevisionAsyncHelper(const Model::RegisterApplicationRevisionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RegisterOnPremisesInstanceAsyncHelper(const Model::RegisterOnPremisesInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RemoveTagsFromOnPremisesInstancesAsyncHelper(const Model::RemoveTagsFromOnPremisesInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void StopDeploymentAsyncHelper(const Model::StopDeploymentRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateDeploymentGroupAsyncHelper(const Model::UpdateDeploymentGroupRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AddTagsToOnPremisesInstancesOutcomeReceivedEvent m_onAddTagsToOnPremisesInstancesOutcomeReceived;
    BatchGetApplicationsOutcomeReceivedEvent m_onBatchGetApplicationsOutcomeReceived;
    BatchGetDeploymentsOutcomeReceivedEvent m_onBatchGetDeploymentsOutcomeReceived;
    BatchGetOnPremisesInstancesOutcomeReceivedEvent m_onBatchGetOnPremisesInstancesOutcomeReceived;
    CreateApplicationOutcomeReceivedEvent m_onCreateApplicationOutcomeReceived;
    CreateDeploymentOutcomeReceivedEvent m_onCreateDeploymentOutcomeReceived;
    CreateDeploymentConfigOutcomeReceivedEvent m_onCreateDeploymentConfigOutcomeReceived;
    CreateDeploymentGroupOutcomeReceivedEvent m_onCreateDeploymentGroupOutcomeReceived;
    DeleteApplicationOutcomeReceivedEvent m_onDeleteApplicationOutcomeReceived;
    DeleteDeploymentConfigOutcomeReceivedEvent m_onDeleteDeploymentConfigOutcomeReceived;
    DeleteDeploymentGroupOutcomeReceivedEvent m_onDeleteDeploymentGroupOutcomeReceived;
    DeregisterOnPremisesInstanceOutcomeReceivedEvent m_onDeregisterOnPremisesInstanceOutcomeReceived;
    GetApplicationOutcomeReceivedEvent m_onGetApplicationOutcomeReceived;
    GetApplicationRevisionOutcomeReceivedEvent m_onGetApplicationRevisionOutcomeReceived;
    GetDeploymentOutcomeReceivedEvent m_onGetDeploymentOutcomeReceived;
    GetDeploymentConfigOutcomeReceivedEvent m_onGetDeploymentConfigOutcomeReceived;
    GetDeploymentGroupOutcomeReceivedEvent m_onGetDeploymentGroupOutcomeReceived;
    GetDeploymentInstanceOutcomeReceivedEvent m_onGetDeploymentInstanceOutcomeReceived;
    GetOnPremisesInstanceOutcomeReceivedEvent m_onGetOnPremisesInstanceOutcomeReceived;
    ListApplicationRevisionsOutcomeReceivedEvent m_onListApplicationRevisionsOutcomeReceived;
    ListApplicationsOutcomeReceivedEvent m_onListApplicationsOutcomeReceived;
    ListDeploymentConfigsOutcomeReceivedEvent m_onListDeploymentConfigsOutcomeReceived;
    ListDeploymentGroupsOutcomeReceivedEvent m_onListDeploymentGroupsOutcomeReceived;
    ListDeploymentInstancesOutcomeReceivedEvent m_onListDeploymentInstancesOutcomeReceived;
    ListDeploymentsOutcomeReceivedEvent m_onListDeploymentsOutcomeReceived;
    ListOnPremisesInstancesOutcomeReceivedEvent m_onListOnPremisesInstancesOutcomeReceived;
    RegisterApplicationRevisionOutcomeReceivedEvent m_onRegisterApplicationRevisionOutcomeReceived;
    RegisterOnPremisesInstanceOutcomeReceivedEvent m_onRegisterOnPremisesInstanceOutcomeReceived;
    RemoveTagsFromOnPremisesInstancesOutcomeReceivedEvent m_onRemoveTagsFromOnPremisesInstancesOutcomeReceived;
    StopDeploymentOutcomeReceivedEvent m_onStopDeploymentOutcomeReceived;
    UpdateApplicationOutcomeReceivedEvent m_onUpdateApplicationOutcomeReceived;
    UpdateDeploymentGroupOutcomeReceivedEvent m_onUpdateDeploymentGroupOutcomeReceived;
  };

} // namespace CodeDeploy
} // namespace Aws
