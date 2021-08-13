#include <torch/csrc/distributed/autograd/rpc_messages/propagate_gradients_resp.h>

namespace torch {
namespace distributed {
namespace autograd {

c10::intrusive_ptr<rpc::OutgoingMessage> PropagateGradientsResp::toMessageImpl(const std::string& meta) && {
  return c10::make_intrusive<rpc::OutgoingMessage>(
      std::vector<char>{},
      std::vector<torch::Tensor>{},
      rpc::MessageType::BACKWARD_AUTOGRAD_RESP,
      meta);
}

std::unique_ptr<PropagateGradientsResp> PropagateGradientsResp::fromMessage(
    const rpc::Message& message) {
  return std::unique_ptr<PropagateGradientsResp>();
}

} // namespace autograd
} // namespace distributed
} // namespace torch
