
#if OCTET_BULLET
  //#include "btBulletDynamicsCommon.h"

  #include "BulletCollision/BroadphaseCollision/btAxisSweep3.cpp"
  #include "BulletCollision/BroadphaseCollision/btBroadphaseProxy.cpp"
  #include "BulletCollision/BroadphaseCollision/btCollisionAlgorithm.cpp"
  #include "BulletCollision/BroadphaseCollision/btDbvt.cpp"
  #include "BulletCollision/BroadphaseCollision/btDbvtBroadphase.cpp"
  #include "BulletCollision/BroadphaseCollision/btDispatcher.cpp"
  #include "BulletCollision/BroadphaseCollision/btMultiSapBroadphase.cpp"
  #include "BulletCollision/BroadphaseCollision/btOverlappingPairCache.cpp"
  #include "BulletCollision/BroadphaseCollision/btQuantizedBvh.cpp"
  #include "BulletCollision/BroadphaseCollision/btSimpleBroadphase.cpp"
  #include "BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.cpp"
  // the following clashes with the Box2D lib
  //#include "BulletCollision/CollisionDispatch/btBox2dBox2dCollisionAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btBoxBoxCollisionAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btBoxBoxDetector.cpp"
  #include "BulletCollision/CollisionDispatch/btCollisionDispatcher.cpp"
  #include "BulletCollision/CollisionDispatch/btCollisionObject.cpp"
  #include "BulletCollision/CollisionDispatch/btCollisionWorld.cpp"
  #include "BulletCollision/CollisionDispatch/btCompoundCollisionAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btConvex2dConvex2dAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btConvexConvexAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btConvexPlaneCollisionAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.cpp"
  #include "BulletCollision/CollisionDispatch/btEmptyCollisionAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btGhostObject.cpp"
  #include "BulletCollision/CollisionDispatch/btInternalEdgeUtility.cpp"
  #include "BulletCollision/CollisionDispatch/btManifoldResult.cpp"
  #include "BulletCollision/CollisionDispatch/btSimulationIslandManager.cpp"
  #include "BulletCollision/CollisionDispatch/btSphereBoxCollisionAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btSphereTriangleCollisionAlgorithm.cpp"
  #include "BulletCollision/CollisionDispatch/btUnionFind.cpp"
  #include "BulletCollision/CollisionDispatch/SphereTriangleDetector.cpp"
  #include "BulletCollision/CollisionShapes/btBox2dShape.cpp"
  #include "BulletCollision/CollisionShapes/btBoxShape.cpp"
  #include "BulletCollision/CollisionShapes/btBvhTriangleMeshShape.cpp"
  #include "BulletCollision/CollisionShapes/btCapsuleShape.cpp"
  #include "BulletCollision/CollisionShapes/btCollisionShape.cpp"
  #include "BulletCollision/CollisionShapes/btCompoundShape.cpp"
  #include "BulletCollision/CollisionShapes/btConcaveShape.cpp"
  #include "BulletCollision/CollisionShapes/btConeShape.cpp"
  #include "BulletCollision/CollisionShapes/btConvex2dShape.cpp"
  #include "BulletCollision/CollisionShapes/btConvexHullShape.cpp"
  #include "BulletCollision/CollisionShapes/btConvexInternalShape.cpp"
  #include "BulletCollision/CollisionShapes/btConvexPointCloudShape.cpp"
  #include "BulletCollision/CollisionShapes/btConvexPolyhedron.cpp"
  #include "BulletCollision/CollisionShapes/btConvexShape.cpp"
  #include "BulletCollision/CollisionShapes/btConvexTriangleMeshShape.cpp"
  #include "BulletCollision/CollisionShapes/btCylinderShape.cpp"
  #include "BulletCollision/CollisionShapes/btEmptyShape.cpp"
  #include "BulletCollision/CollisionShapes/btHeightfieldTerrainShape.cpp"
  #include "BulletCollision/CollisionShapes/btMinkowskiSumShape.cpp"
  #include "BulletCollision/CollisionShapes/btMultimaterialTriangleMeshShape.cpp"
  #include "BulletCollision/CollisionShapes/btMultiSphereShape.cpp"
  #include "BulletCollision/CollisionShapes/btOptimizedBvh.cpp"
  #include "BulletCollision/CollisionShapes/btPolyhedralConvexShape.cpp"
  #include "BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.cpp"
  #include "BulletCollision/CollisionShapes/btShapeHull.cpp"
  #include "BulletCollision/CollisionShapes/btSphereShape.cpp"
  #include "BulletCollision/CollisionShapes/btStaticPlaneShape.cpp"
  #include "BulletCollision/CollisionShapes/btStridingMeshInterface.cpp"
  #include "BulletCollision/CollisionShapes/btTetrahedronShape.cpp"
  #include "BulletCollision/CollisionShapes/btTriangleBuffer.cpp"
  #include "BulletCollision/CollisionShapes/btTriangleCallback.cpp"
  #include "BulletCollision/CollisionShapes/btTriangleIndexVertexArray.cpp"
  #include "BulletCollision/CollisionShapes/btTriangleIndexVertexMaterialArray.cpp"
  #include "BulletCollision/CollisionShapes/btTriangleMesh.cpp"
  #include "BulletCollision/CollisionShapes/btTriangleMeshShape.cpp"
  #include "BulletCollision/CollisionShapes/btUniformScalingShape.cpp"

  #include "BulletCollision/NarrowPhaseCollision/btContinuousConvexCollision.cpp"
  #include "BulletCollision/NarrowPhaseCollision/btConvexCast.cpp"
  #undef MAX_ITERATIONS
  #include "BulletCollision/NarrowPhaseCollision/btGjkConvexCast.cpp"
  #include "BulletCollision/NarrowPhaseCollision/btGjkEpa2.cpp"
  #include "BulletCollision/NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.cpp"
  #include "BulletCollision/NarrowPhaseCollision/btGjkPairDetector.cpp"
  #include "BulletCollision/NarrowPhaseCollision/btMinkowskiPenetrationDepthSolver.cpp"
  #include "BulletCollision/NarrowPhaseCollision/btPersistentManifold.cpp"
  #define IsAlmostZero IsAlmostZero2
  #include "BulletCollision/NarrowPhaseCollision/btPolyhedralContactClipping.cpp"
  #include "BulletCollision/NarrowPhaseCollision/btRaycastCallback.cpp"
  #include "BulletCollision/NarrowPhaseCollision/btSubSimplexConvexCast.cpp"
  #include "BulletCollision/NarrowPhaseCollision/btVoronoiSimplexSolver.cpp"
  #include "BulletDynamics/Character/btKinematicCharacterController.cpp"
  #include "BulletDynamics/ConstraintSolver/btConeTwistConstraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btContactConstraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btHinge2Constraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btHingeConstraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btPoint2PointConstraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.cpp"
  #include "BulletDynamics/ConstraintSolver/btSliderConstraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btSolve2LinearConstraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btTypedConstraint.cpp"
  #include "BulletDynamics/ConstraintSolver/btUniversalConstraint.cpp"
  #include "BulletDynamics/Dynamics/btContinuousDynamicsWorld.cpp"
  #include "BulletDynamics/Dynamics/btDiscreteDynamicsWorld.cpp"
  #include "BulletDynamics/Dynamics/btRigidBody.cpp"
  #include "BulletDynamics/Dynamics/btSimpleDynamicsWorld.cpp"
  #include "BulletDynamics/Vehicle/btRaycastVehicle.cpp"
  #include "BulletDynamics/Vehicle/btWheelInfo.cpp"
  #include "LinearMath/btAlignedAllocator.cpp"
  #include "LinearMath/btConvexHull.cpp"
  #include "LinearMath/btConvexHullComputer.cpp"
  #include "LinearMath/btGeometryUtil.cpp"
  #undef WIN32_LEAN_AND_MEAN
  #include "LinearMath/btQuickprof.cpp"
  #include "LinearMath/btSerializer.cpp"
#endif

//#include "physics_world.h"

namespace octet { namespace physics {
  inline btVector3 get_btVector3(vec3_in v) {
    return btVector3(v[0], v[1], v[2]);
  }

  inline btMatrix3x3 get_btMatrix3x3(mat4t_in m) {
    return btMatrix3x3(
      m[0][0], m[0][1], m[0][2],
      m[1][0], m[1][1], m[1][2],
      m[2][0], m[2][1], m[2][2]
    );
  }
} }




